# C-Program
C programs

## Function calling

| Types | declarations(prototype)  |   function definition    |   function call  |
| :------: | :-----:      |   :-----:    |   :----:   |
| **Normal** | void func(int a, float b); |  void func(int a, float b){ } | func(5,36.02); |
|  **Array**   |   int func(int age[],int num[ ][ ]);   |   int func(int age[ ],int num[ ][ ]){ }  |    func(age,num);   |
| **pointer** |   int func(int *num1,int *num2);    |  int func(int * num1,int * num2){ }     |   func(&num1,&num2);  |
| **Structure** |  void func(struct student stu);     |  int func(struct student stu){ }  |   func(stud);   |
