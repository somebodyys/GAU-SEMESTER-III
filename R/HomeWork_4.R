#task 1

obj <- c(6,9,7,3,6,7,9,6,3,6,6,7,1,9,1)
obj == 6 #i
obj >= 6 #ii
obj < 6 + 2 # iii
obj != 6 #iV

#task 2
foo <- c(7,1,7,10,5,9,10,3,10,8) #a
foo[foo > 5 | foo == 2] 

bar <- c(8,8,4,4,5,1,5,6,6,8) #b
bar[bar <= 6 & bar != 4]

foo[foo == bar] #c

baz = foo + bar #d
baz[baz >= 14 & baz != 15] #i

baz[baz > 4 | baz <= 2] / foo #ii

#e ?????????????????

foo <- c(7,5,6,1,2,10,8,3,8,2) #a
bar <- foo[foo >= 5] #i
foo[!(foo >= 5)] #ii


baz <- matrix(bar, nrow= 2, ncol = 3, byrow = T) #b
baz[baz == 8] <- baz[1, 2] #i

baz <= 25 & baz > 4 #ii



#NEW ZELAND


#a
sex <- rep("M", times=20)  
sex[c(1, 5:7, 14:16)] <- "F"
political_parties <- rep("National", times=20)
political_parties[c(1, 4, 12, 15, 16, 19)] <- "Labour"
political_parties[c(6, 9, 11)] <- "Green"
political_parties[c(10, 20)] <- "Other"

#b
parties_factor <- factor(political_parties)
sex_factor <- factor(sex)

#c
parties_factor[sex_factor == "M"] #i
sex_factor[parties_factor == "National"] #ii

#d
parties_factor <- factor(c(political_parties, c("National", "Maori", "Labour", "Greens", "Labour")))
sex_factor <- factor(c(sex, c("M", "M", "F", "F", "F", "M")))

#e
confidence <- c(93, 55, 29, 100, 52, 84, 56, 0, 33, 52, 35, 53, 55, 46, 40, 40, 56, 45, 64, 31, 10, 29, 40, 95, 18, 61)

result <- cut(confidence, breaks = c(0, 30, 70, 100), right = F, include.lowest = T, labels = c("Low", "Moderate", "High"))  

#f
result[political_parties == "Labour"]
result[political_parties == "National"]
