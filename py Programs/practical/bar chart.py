import matplotlib.pyplot as plt
date=["25/12","26/12","27/12","28/12","29/12"]
temp=[18.5,20.5,16.8,21.3,20.5]
plt.bar(date,temp,color='blue',width=0.4)
plt.xlabel("Date") 
plt.ylabel("Temperature(in Celsius)") 
plt.title("Date wise Temperature")
plt.show()
