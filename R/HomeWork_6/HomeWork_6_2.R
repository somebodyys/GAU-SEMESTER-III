#Preparing
library(tidyr)

#Data
groups <- c("2-7", "7-12", "12-17", "17-22", "22-27", "27-32", "32-37")
values <- c(3,11,23,5,32,2,20)
data <- data.frame(groups, values)
data <- separate(data, groups, c("Start", "End"), sep = "-")
data$Start <- as.numeric(data$Start)
data$End <- as.numeric(data$End)

#Result: Grouped Mean Value
sum(((data$End + data$Start) / 2) * data$values) / sum(data$values)