#Home Work 2

#a
mtx <- matrix(c(4.3, 3.1, 8.2, 8.2, 3.2, 0.9, 1.6, 6.5), nrow = 4, ncol = 2, byrow = TRUE)
#b
dim(mtx[-1,])
#c
mtx[,2] = sort(mtx[,2])
#d
matrix(mtx[-4, -1])
#e
new <- mtx[c(3,4),]
#f
mtx[c(4, 1), c(2,1)] <- c(-1, 2, diag(new))
