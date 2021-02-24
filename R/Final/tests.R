result <- cut(survey$age, breaks = c(20,25,30,39,72), right = F, labels = c("A", "B", "C", "D"))


#1
mean(survey$distance_residence[result == "B"]) - mean(survey$distance_residence[result == "A"])
#2
mean(survey$college_GPA[result == "B" & survey$gender == "m"]) - mean(survey$college_GPA[result == "A" & survey$gender == "f"])
#3
total <- survey$gender[result == "A" & survey$gender == "m"]
republicans <- survey$gender[result == "A" & survey$gender == "m" & survey$political_affiliation == "r"]
length(republicans)/length(total)*100
#4
total <- survey$religiosity[survey$religiosity == 0]
LAD <- survey$religiosity[survey$religiosity == 0 & survey$life_after_death == "y"]
length(LAD)/length(total)*100
#5
total <- survey$religiosity[survey$gender == "f" &  survey$religiosity == 0]
LAD <- survey$religiosity[survey$gender == "f" & survey$religiosity == 0 & survey$life_after_death == "y"]
length(LAD)/length(total) * 100
#6
total <- survey$gender[survey$political_affiliation != "r" & survey$gender == "f"]
legal <- survey$gender[survey$political_affiliation != "r" & survey$gender == "f" & survey$abortion_legalize=="y"]
length(legal)/length(total)*100
#7
total <- survey$abortion_legalize[survey$abortion_legalize == "y"]
RWS <- survey$abortion_legalize[survey$abortion_legalize == "y" & survey$political_affiliation == "r" & survey$gender =="f"]
length(RWS)/length(total)*100