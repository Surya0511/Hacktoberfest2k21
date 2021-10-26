#Python code for leap year  

def Leapyr(Yr):  
    
  if((Yr % 400 == 0) or  
     (Yr % 100 != 0) and  
     (Yr % 4 == 0)):

    print("Given Year is a leap Year !");  
  
  else:  
    print ("Given Year is not a leap Year !")  
  
Yr = int(input("Enter your year: "))  
  
Leapyr(Yr)