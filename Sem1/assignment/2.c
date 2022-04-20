/*
Recursion:-
    *Recursion is the process of repeating items in a self-similar way.
    *In programming languages, if a program allows you to call a
     function inside the same function, then it is called a recursive call of the function.

Activation Record:-

    *Control stack is a run time stack which is used to keep track of the live procedure activations i.e.
     it is used to find out the procedures whose execution have not been completed.
    *When it is called (activation begins) then the procedure name will push on to the stack and when it
     returns (activation ends) then it will popped.
    *Activation record is used to manage the information needed by a single execution of a procedure.
    *An activation record is pushed into the stack when a procedure is called and it is popped when the control returns to the caller function.

    The information stored in it are:-

    Return Value: It is used by calling procedure to return a value to calling procedure.

    Actual Parameter: It is used by calling procedures to supply parameters to the called procedures.

    Control Link: It points to activation record of the caller.

    Access Link: It is used to refer to non-local data held in other activation records.

    Saved Machine Status: It holds the information about status of machine before the procedure is called.

    Local Data: It holds the data that is local to the execution of the procedure.

    Temporaries: It stores the value that arises in the evaluation of an expression.


*/

#include<stdio.h>
int sum(int n)
{
        if (n < 1)
        {
            return 0;
        }
        else
        {
            return sum(n - 1) * (n - 1) + n;
        }
}
void main()
{
    printf("%d",sum(5));
}
/*Output:129*/
