#getting Ready
survey <- read.csv("fl_student_survey.csv")


#1
mean(survey$age[survey$gender == 'm']) - mean(survey$age[survey$gender == 'f'])

#2
mean(survey$college_GPA[survey$gender == 'm']) - mean(survey$college_GPA[survey$gender == 'f'])

#3
mean(survey$sports[survey$gender == 'm']) - mean(survey$sports[survey$gender == 'f'])

#4
CutedSport <- cut(survey$sports, breaks = c(0, 6, 10, 18), include.lowest = T, right = F, labels = c('A', 'B', 'C'))

mean(survey$age[CutedSport == 'A' & survey$gender == 'm']) - mean(survey$age[CutedSport == 'B' & survey$gender == 'm'])

#5
length(CutedSport[survey$life_after_death == 'y' & CutedSport == 'A' & survey$gender == 'm']) / length(CutedSport[CutedSport == 'A' & survey$gender == 'm']) * 100

#6

length(survey$abortion_legalize[survey$political_affiliation == 'r' & survey$gender == 'f' & survey$abortion_legalize == 'y']) / length(survey$abortion_legalize[survey$political_affiliation == 'r' & survey$gender == 'f']) * 100 

#7
mean(survey$age[survey$abortion_legalize == 'y']) - mean(survey$age[survey$abortion_legalize == 'n'])

#8
max(survey$AIDS[survey$religiosity == 3])

#9
abortion_count <- length(survey$abortion_legalize[survey$gender == 'f' & survey$political_affiliation != 'r' & survey$college_GPA > 3 & survey$abortion_legalize == 'y'])
total <- length(survey$abortion_legalize[survey$gender == 'f' & survey$political_affiliation != 'r' & survey$college_GPA > 3])
abortion_count / total * 100

#10

length(survey$life_after_death[survey$religiosity != 3 & survey$life_after_death == 'y']) / length(survey$life_after_death[survey$religiosity != 3]) * 100




