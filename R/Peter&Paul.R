#Data
coin <- c("Head", "Tail")
iterations <- 1000
tries <- 50

#Play
PeterStats <- c()
for(i in 1:iterations){
  peterWins <- c()
  for(match in 1:tries){
    picked <- sample(coin, 1)
    peterWins <- append(peterWins, ifelse(picked == "Head", 1, -1))
  }
  PeterStats <- append(PeterStats, sum(peterWins))
}


#Plotting Data
par(mfrow=c(2,1))
plot(1:iterations,
     cumsum(PeterStats), 
     type = "l", 
     xlab = "Matches (50 Games Total Per Each)", 
     ylab = "Balance")

plot(1:iterations,
     PeterStats,
     type = "l",
     xlab = "Matches (50 Games Total Per Each)",
     ylab = "Balance")