# Ashirwad Kumar  Email --> ashirwadrai5879@outlook.com

n=10
min_seg=2
max_seg=4
days=[3, 2, -7 , 5, 4, 1 , 3, 0, -3 , 5]
seg=list(range(min_seg,max_seg+1))
min_prof=n
max_prof=0
def extract_slices(array:list,seg:int)-> list:
  x= len(array)//seg
  rarray=[]
  for j in range(seg):
    start=[array[:j]]
    end=[array[i:seg+i] for i in range(j,(x+1)*seg,seg)]
    start.extend(end)
    #print(start)
    try:
      start.remove([])
    except:
      pass
    for i , v in enumerate(start):
      start[i]=sum(v)
    start=(sum(1 for i in start if i>0))
    rarray.append(start)
  return rarray

# print(extract_slices(days,3))
for i in seg:
  j=extract_slices(days,i)
  for element in j:
    if element < min_prof:
      min_prof=element
    if element > max_prof:
      max_prof = element
    
print(min_prof,max_prof)

