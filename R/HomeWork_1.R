#Homework 1


#Part 1
a <- seq(from=5, to=-11, by=-0.3)
a <- sort(a, decreasing = FALSE)
c <- sort(rep(c(-1, 3, -5, 7, -9), times=2, each=10), decreasing = TRUE)
d <- c(6:12, rep(5.3, times=3), -3, seq(from=102, to=length(c), length.out = 9))
e <- length(d)

#part 2
vec <- c(seq(3, 6, length.out = 5), rep(c(2, -5.1, -33), 2), 7, 42+2)
obj <- vec[c(1, length(vec))]
new <- vec[c(-1, -length(vec))]
rec <- c(obj[1],new, obj[2])
vec <- sort(vec, decreasing = FALSE)
col <- vec[length(vec):1]
g <- c(rep(new[3], 3), rep(new[6], 4), new[length(new)])
copy <- vec
copy[c(1, 5:7, length(copy))] <- 99:95

