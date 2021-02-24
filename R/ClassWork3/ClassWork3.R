

myData <- read.csv("Ch03_After_high_school amotsana 16.csv",header = T)
barplot(prop.table(table(myData[,2],myData[,1]),2))

Prison <- read_xls("Ch03_Federal_Prisons amtsana 20.xls")

barplot(prop.table(table(Prison),2))