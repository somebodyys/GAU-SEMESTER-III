boxes <- c(rep("Tiger Woods", 2), rep("Lance Armstrong", 3), rep("Serena Williams", 5))
iter <- 1000

totalTries <- 0
for(i in 1:iter){
  tries <- 0
  myCards <- c()
  while(length(myCards) != 3){
    boughtCard <- sample(boxes, 1)
    tries <- tries + 1
    if(!(boughtCard %in% myCards)){
      myCards <- append(myCards, boughtCard)
    }
  }
  totalTries <- totalTries + tries
}
totalTries / iter


