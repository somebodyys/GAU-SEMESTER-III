goal <- 10
tries <- 1000

totalTurns <- 0
for( i in 1:tries){
  turns <- 0
  currentSpace <- 0
  while(currentSpace != goal){
    picked <- sample(1:6, 1)
    turns <- turns + 1
    if(currentSpace + picked <= goal){
      currentSpace = currentSpace + picked
    }
  }
  totalTurns <- totalTurns + turns
}
totalTurns / tries