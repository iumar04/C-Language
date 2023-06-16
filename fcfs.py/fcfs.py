top=0
a_tat=0
a_wt=0
at=[]
bt=[]
n=int(input("Enter No. of Process: "))
for i in range(n):
    pro=int(input("P%d Arrival Time: "%(i+1)))
    at.append(pro)
    pro=int(input("P%d Burst Time: "%(i+1)))
    bt.append(pro)
    print()

ct=[]
tat=[]
wt=[]
print()
for i in range(n):
    if (i==0):
        top=top+bt[i]
        ct.append(top)
    elif (i>0):
        if top<at[i]:
            top=at[i]+bt[i]
            ct.append(top)
        else:
            top=top+bt[i]
            ct.append(top)
print("Completion Time calculated...")

for i in range(n):
    var=ct[i]-at[i]
    tat.append(var)
    var=tat[i]-bt[i]
    wt.append(var)
print("Turn Around Time calculated...")
print("Waiting Time calculated...")
print()
print("Process ID", "Arrival Time", "Burst Time", "Completion Time", "Turn Around Time", "Waiting Time")
for i in range(n):
    print(" " + str((i+1)) + "\t\t" + str(at[i]) + "\t" + str(bt[i]) + "\t\t" + str(ct[i]) + "\t\t" + str(tat[i]) + "\t\t" + str(wt[i]) + " ")
    a_tat=a_tat+tat[i]
    a_wt=a_wt+wt[i]

a_tat=a_tat/n
a_wt=a_wt/n

print()
print("Average Turn Around Time: ",a_tat)
print("Average Waiting Time: ",a_wt)
