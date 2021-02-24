#import
library(ggplot2)

#load data
heart <- read.csv("heart.csv")


#building data frame with intercals and freq
dataFreq <- function(vec, gaps = 5){
  sortedVec <- sort(vec)
  space <- ceiling(max(sortedVec)/gaps)
  interval <- c(0)
  for (i in 2:(gaps + 1)) {
    interval <- append(interval, interval[i-1] + space)
  }
  
  return(data.frame(table(cut(sortedVec, interval, include.lowest = T, right = F))))
}

gapPercents <- function(frame){
  frame$Freq <- (frame$Freq * 100)/sum(frame$Freq)
  names(frame)[2] <- "Percent"
  return(frame)
}

summedPercents <- function(percentFrame,vec, gaps = 5){
  sortedVec <- sort(vec)
  space <- ceiling(max(sortedVec)/gaps)
  interval <- c(0)
  for (i in 2:(gaps + 1)) {
    interval <- append(interval, interval[i-1] + space)
  }
  percentFrame$Var1 <- interval[-1]
  
  sum <- 0
  for(i in 1:length(percentFrame$Percent)){
    sum <- sum + percentFrame$Percent[i]
    percentFrame$Percent[i] <- sum
  }
  
  return(percentFrame)
}


ggplot(dataFreq(heart$ï..age), mapping = aes(x = Var1, y = Freq)) + geom_col(aes(fill = Var1)) + labs(x = "Age", fill = "Age Groups")
ggplot(gapPercents(dataFreq(heart$ï..age)), mapping = aes(x = Var1, y = Percent)) + geom_col(aes(fill = Var1)) + labs(x = "Age", fill = "Age Groups")
ggplot(summedPercents(gapPercents(dataFreq(heart$ï..age)), heart$ï..age), mapping = aes(x = Var1, y = Percent)) + geom_col(aes(fill = Var1)) + labs(x = "Age", fill = "Age")

ggplot(dataFreq(heart$chol), mapping = aes(x = Var1, y = Freq)) + geom_col(aes(fill = Var1)) + labs(x = "Cholesterine", fill = "Cholesterine")