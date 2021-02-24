###############################################
#Building Data 1
myData <- list(seq(from = -4, to = 4, length.out = 20),
               matrix(c(F,T,T,T,F,T,T,F,F), nrow = 3, ncol = 3),
               c("don", "quixote"),
               factor(c("LOW", "MED", "LOW", "MED", "MED", "HIGH")))

#1
myData[[2]][c(2,1),][,c(2,3)]

#2
myData[[1]][myData[[1]] > 1]

#3
which(myData[[4]] == "MED")

###############################################
#Building Data 2
myData2 <- list(facs = myData[[4]],
                nums = c(3,2.1,3.3,4,1.5,4.9),
                oldList = myData[1:3])

#i
myData2[[1]][myData2$nums >= 3]

#ii
myData2$flags <- rep(myData2$oldList[[2]][,3], 2)

#iii
myData2$nums[!(myData2$flags)]

#iv
myData2$oldList[[3]] <- paste(myData2$oldList[[3]][1], myData2$oldList[[3]][2])