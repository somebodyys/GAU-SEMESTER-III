set.seed(50000)
sex <- sample(c(0,1), 50000, replace = T, prob = c(0.7, 0.3))

#Returns list Of Mean values that Are randomly picked.
meanListGenerator <- function(population, size, tries){
  result <- c();
  
  for(i in 1:tries){
    
    result <- append(result, mean(sample(population, size, replace = T)))
    
  }
  return(result)
}

sizes <- c(500, 1000, 1500, 2000, 2500, 3000)

test <- c()
for(i in sizes){
  test <- append(test, mean(meanListGenerator(sex, i, 500)))
}


