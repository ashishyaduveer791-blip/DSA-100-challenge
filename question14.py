
class solution:
    def __init__(self,arr):
        self.arr =arr
        def frequency(self):
            n= len(self.arr)
            n=len(self.arr)
            for i in range(n):
                count = 0
                already_counted = False
                # check if the elements was already counted
                for k in range(i):
                    if self.arr[i]== self.arr[k]:
                        already_counted=True
                        break
                    if already_counted:
                        continue
                    # vount the frequency
                    for j in range(n):
                        if self.arr[i]==self.arr[j]:
                            count +=1
                            print(self.arr[i],"->",count)

                            # main
                            n=int(input("Enter soze of array:"))
                            arr=[]
                            print("Enter the element:")
                            for i in range(n):
                                arr.append(int(input()))
                                obj=solution(arr)
                                obj.frequency()







            