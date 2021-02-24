#load
#8
survey <- read.csv("fl_student_survey.csv")
result <- cut(survey$age, breaks = c(20,25,30,39,72), right = F, labels = c("A", "B", "C", "D"))

par(xpd = TRUE)
plot(
  survey$high_sch_GPA,
  survey$college_GPA,
  type = "p",
  pch = 19,
  col = ifelse(result == "A", "red", ifelse(result == "B", "blue", ifelse(result == "C", "green", "brown"))),
  xlab = "High School GPA",
  ylab = "College GPA"
)

legend(
  "topleft",
  inset = c(0, -0.2),
  title = "Category",
  c("A", "B", "C", "D"),
  fill = c("red", "blue", "green", "brown"),
  cex=0.6,
  horiz = T
)

#9
barplot(
  prop.table(table(data.frame(result, survey$abortion_legalize)), 2),
  col = c("green", "#E33A6F", "#3AE3E0", "#800785")
)

legend(
  "topright",
  title = "Category",
  c("A", "B", "C", "D"),
  fill = c("green", "#E33A6F", "#3AE3E0", "#800785"),
  cex=0.6
)



#10
limit <- 21
oponent <- 18
iterations <- 1000

games <- c()
totalCounter <- 0
for(i in 1:iterations){
  myScore <- 0
  counter <- 0
  while(myScore <= oponent){
    rolled <- sample(1:6, 1)
    counter <- counter + 1
    myScore <- myScore + rolled
    if(myScore > limit){
      games <- append(games, "Lose")
      break
    }
  }
  if(myScore <= limit){
    games <- append(games, "Win")
  }
  totalCounter <- totalCounter + counter 
}
length(games[games == "Win"]) / length(games) * 100
totalCounter/iterations