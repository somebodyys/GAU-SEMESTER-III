#a

(2/7)* (matrix(c(1,2,7,2,4,6), nrow = 3, ncol = 2) - matrix(c(10,30,50,20,40,60), nrow = 3, ncol = 2))

#b
A <- matrix(c(1,2,7))
B <- matrix(c(3,4,8))

A %*% B #i
t(A) %*% B #ii
t(B) %*% (A %*% t(A)) #iii
(A %*% t(A)) %*% t(B) # iv
solve((B %*% t(B)) + (A %*% t(A)) - 100 * diag(3)) #v

#c
A <- diag(c(2,3,5,-1))

solve(A) %*% A - diag(4) #confirmed
