# C-Program
C programs

## DATA TYPE

| Type | Specifier | Example |
| :----:| :---- | :---- |
| integer |  %d | printf("Integer is:%d\n",a); |
| character | %c | printf("Character is:%c\n",c) |
| float | %f  |  printf("Float is:%f\n",b); |
| double | %d | printf("Double is:%d \n,d); |
| String | %s |   printf("String=%s",s) |
| sizeof | %lu |  printf("size of%lu",sizeof(a)); |





## Function calling

| Types | declarations(prototype)  |   function definition    |   function call  |
| :------: | :-----:      |   :-----:    |   :----:   |
| **Normal** | void func(int a, float b); |  void func(int a, float b){ } | func(5,36.02); |
|  **Array**   |   int func(int age[],int num[ ][ ]);   |   int func(int age[ ],int num[ ][ ]){ }  |    func(age,num);   |
| **pointer** |   int func(int *num1,int *num2);    |  int func(int * num1,int * num2){ }     |   func(&num1,&num2);  |
| **Structure** |  void func(struct student stu);     |  int func(struct student stu){ }  |   func(stud);   |
