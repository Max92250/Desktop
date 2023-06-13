
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
/*
 * C program to implement stack operations.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;
#define max 20
 
int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
 
    return 0;

}