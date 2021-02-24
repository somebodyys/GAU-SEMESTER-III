#getting ready
myData <- data.frame(person=c("Peter","Lois","Meg","Chris","Stewie"),age=c(42,40,17,14,1),sex=factor(c("M","F","F","M","M")))
newrecord <- data.frame(person="Brian",age=7,sex=factor("M",levels=levels(myData$sex)))
myData <- rbind(myData,newrecord)
funny <- c("High","High","Low","Med","High","Med")
funny <- factor(x=funny,levels=c("Low","Med","High"))
myData <- cbind(myData,funny)
myData$age.mon <- myData$age*12

#a
dframe <- data.frame(person = c("Stan", "Francine", "Steve", "Roger", "Hayley", "Klaus"), sex = factor(c("M", "F", "M", "M", "F", "M")), funny = factor(c("High", "Med", "Low", "High", "Med", "Med")))

#b
dframe$age <- c(41, 41, 15, 1600, 21, 60)

#c
dframe <- dframe[, c("person", "age", "sex", "funny")]

#d
myData2 <- myData[,-5]

#e
myDataFrame <- rbind(dframe, myData2)

#f
myDataFrame[myDataFrame$sex == "F" & myDataFrame$funny != "Low",1:2]

#g
myDataFrame[substr(myDataFrame$person, 0, 1) == "S",]
