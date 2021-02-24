
#1
iris$Petal.Length[c(1, 20, 30)]


#2
iris[, c(2, 1, 3:5)]

#3

cuted <- cut(iris$Sepal.Width, breaks = c(2, 2.5, 3.2, 3.9, 4.5), include.lowest = T, right = F, labels = c("A", "B", "C", "D"))

#4
iris$half <- iris[,2] / 10

#5
mean(iris$Sepal.Width[iris$Petal.Width == 0.2]) - mean(iris$Sepal.Width[iris$Petal.Width > 0.2])

#6
iris[cuted == "A" & iris$Petal.Width < 0.32,]

#7
iris[cuted == "A" & iris$Petal.Width > 0.24,]

#8
iris[cuted == "D" & iris$Sepal.Width > 3 & iris$Petal.Width > 0.2,]

#9
par(mfrow = c(1, 2))
hist(iris$Sepal.Length[iris$Petal.Width == 0.2], main = "Histogram 1" , xlab = "Sepal Length")
hist(iris$Sepal.Length[iris$Petal.Width  > 0.2], main = "Histogram 2" , xlab = "Sepal Length")

#10
par(mfrow = c(1, 2))
hist(iris$Petal.Length[iris$Petal.Width == 2], main = "Histogram 1", xlab = "Petal Length")
hist(iris$Petal.Length[iris$Petal.Width > 2], main = "Histogram 2", xlab = "Petal Length")