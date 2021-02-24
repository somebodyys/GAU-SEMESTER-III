
#load
survay <- read.csv("fl_student_survey.csv")

interval <- 6

min <- min(survay$age)
max <- max(survay$age)

gaps <- ceiling((max - min) / interval)
breaks <- seq(min(survay$age), max(survay$age) + gaps, by = gaps)[1:(interval + 1)]

manCuted <- cut(survay$age[survay$gender == "m"], breaks = breaks, right = F)
femaleCuted <- cut(survay$age[survay$gender == "f"], breaks = breaks, right = F)

manFreq <- transform(table(manCuted))
femaleFreq <- transform(table(femaleCuted))

manFreq$precent <- (manFreq$Freq * 100)/sum(manFreq$Freq)
femaleFreq$precent <- (femaleFreq$Freq * 100)/sum(femaleFreq$Freq)

manFreq$summedPercents <- cumsum(manFreq$precent)
femaleFreq$summedPercents <- cumsum(femaleFreq$precent)

plot(breaks,
    c(0,femaleFreq$summedPercents),
    type="b",
    col="blue"
)

lines(breaks,
      c(0, manFreq$summedPercents),
      type = "b",
      col ="green")


plot((breaks[-1] + breaks[-length(breaks)])/2,
    femaleFreq$precent,
    type="b",
    xlab = "midpoints",
    ylab = "Freq",
    col="blue"
)

lines((breaks[-1] + breaks[-length(breaks)])/2,
      manFreq$precent,
      type="b",
      col = "green")

legend("topright",
       legend = c("male", "female"),
       title = "Genders",
       fill= c("green", "blue")
       )

boxplot(survay$age[survay$gender == "m"],
        survay$age[survay$gender == "f"],
        col= c("green", "blue"))
