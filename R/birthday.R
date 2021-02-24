
tries <- 1000
sizeOfGroup <- 25
counter <- 0

for(i in 1:tries){
  lng <- length(unique(sample(1:365, sizeOfGroup, replace = T)))
  if(lng != 25){
    counter = counter + 1
  }
}

counter / tries * 100
