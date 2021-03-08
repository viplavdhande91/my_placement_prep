#Print all Jumping Numbers smaller than or equal to a given value


def jumping_num_print(num):
    is_jumping = False
    
    for x in range(0,num+1,1):
        if x <= 9:
            print(x)  #for single digit numbers{which are by default jumping numbers}

        if x >= 10:
            num_str = str(x)
            len_of_str = len(num_str)

            for k in range(len_of_str - 1):    #for p digit number (p-1) comparisons will occur
                
                if abs(int(num_str[k])- int(num_str[k+1])) == 1:
                    is_jumping = True
                else:
                    is_jumping = False

            if is_jumping:
                print(int(num_str))

                


if __name__ == '__main__':
    num = 105

    jumping_num_print(num)


'''
T.C = O(n)

S.C = O(1)


'''