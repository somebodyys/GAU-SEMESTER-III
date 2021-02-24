#1

myData <- c(2, 6, 14, 1, 10, 3, 0, 26, 37, 47, 4, 0, 6, 21, 3, 6, 6, 51, 8, 11, 0, 0, 4, 2, 5, 9, 4, 6, 24, 4, 1, 18, 63, 1, 5, 6, 4, 7, 12, 5, 3, 4, 3, 15, 46, 0, 5, 0, 26, 5, 17, 1, 17, 1, 58, 9)

intervals <- 13

space <- ceiling((max(myData) - min(myData)) / intervals)

breaks <- seq(min(myData), max(myData) + space, by = space)[1:(intervals + 1)]
cutedData <- cut(myData, breaks, right = F)
originalFreq <- transform(table(cutedData))

originalFreq$percents <- (originalFreq$Freq * 100)/sum(originalFreq$Freq)
originalFreq$summedPercents <- cumsum(originalFreq$percents)

hist(myData, breaks = breaks, col= "purple", at = breaks, xlab = "Stolen Feathers")

#summed Percents
plot(breaks, c(0, originalFreq$summedPercents), type = "b", pch = 10, col = "purple", xlab = "Intervals", ylab = "Stolen Percent")
#Frequencies
plot(breaks, c(0, originalFreq$Freq), type = "b", pch = 10, col = "purple", xlab = "Intervals", ylab = "Freq")


#2
survey <- read.csv("fl_student_survey.csv") #load

plot(survey$high_sch_GPA, 
     survey$college_GPA, 
     type = "p", 
     pch = ifelse(survey$political_affiliation == "r", 8, ifelse(survey$political_affiliation == "d", 6, 10)),
     col = ifelse(survey$political_affiliation == "r", "blue", ifelse(survey$political_affiliation == "d", "red", "green")),
     xlab = "High school GPA", ylab = "College GPA")

#3

plot(mtcars$wt,
     mtcars$mpg,
     type = "p",
     pch = ifelse(mtcars$gear == 3, 22, ifelse(mtcars$gear == 4, 24 ,25)),
     col = ifelse(mtcars$gear == 3, "green", ifelse(mtcars$gear == 4, "red" , "blue"))
     )