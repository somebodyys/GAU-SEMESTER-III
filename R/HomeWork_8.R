Weight <- c(55,85,75,42,93,63,58,75,89,67)
Height <- c(161,185,174,154,188,178,170,167,181,178)
Sex <- c("f", "m", "m","f","m","m","f","m","m","f")
myData <- data.frame(Weight, Height, Sex)



par(mar = c(5,4,4,8), xpd = T)
plot(Weight, 
     Height, 
     pch = ifelse(Sex == "m", 17, 16), col = ifelse(Sex == "m", "blue", "red"),
     cex = 1.5)

title("DIfference")
legend("topright",
       legend = c("Male", "Female"),
       col = c("blue","red"),
       pch = c(17,16),
       cex = 1.2,
       inset = c(-0.5, 0))

