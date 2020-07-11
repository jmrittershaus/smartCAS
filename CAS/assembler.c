				Machine code Explain Update by vbmew@hotmail

 Add me to your msn messenger list if you have any question


Note: if I said any thing that is wrong then tell me I will correct as soon as I can


Note again: I will give you c++ and visual basic example only


Note: i type really fast so ignore some spelling errors.


Note a more time:Please give me credit if you use this to build an assembler thx


Step 1

------------/////////////What is Machine code--------------\\\\\\\\\\\\\\\\\



Machine code is somthing that the machine can only understand.
Your machine can't understand C++ or visual basic, it can only understand 
Machine code. Your code is compile than link before a machine can understand it.
Lets look at a basic c++ program and see what it translate to



void main()


{


}


what does that assemble to, many of you have been wondering


it assembles into this


push ebp


mov ebp,esp


leave


ret


I know that is assemble. Well you see if people want to understand how the machine works
they should program and assemble. Look at the assemble code of the c++ program again
now here or the Opcodes.
55 = push ebp


89E5 = nov ebp,esp


C9 = leave


C3 = ret


Yes those or Opcodes they or numbers that tell the machine what to do.




Step 2

--------------\\\\\\\\\\\\\ I thought computors only Knew 0's and 1's---------\\\\\\\\\\


True computers can only understand 0's and 1's but it might not be the way you think because computors get values that way.


Example:


0000-0010 = 2


when the computor see that it is going to do command number 2 which
could be retn. You see machine does not look into some memory board that contains 0101 they look at little tiny things that can be charge with 5v which means on =1 or off =0 .

 
a computor reads the bit and tells its it on or off. A bit can hold only 1 or 0. Be on or off.



Step 3

-----------------\\\\\\\\\\\\ How can a Eight bits hold a value from 0-255------------------------\\\\\\\\\\\\\\\\\\\



We'll many of you know that 8 bits hold a byte right. You might wonder sometimes how can 8 bits be a byte.Thats simple don't think of 8 bit as 8 bit because Eight different bits can only hold one bit each which is eight bits.


Look at them like they or together with 8*8 different Combination
Example


cpu reads these lines


0000-0001


0000-0002


0000-0003


0000-0004


0000-0005


Computor requires 255 * 5 bits or memory to read that statement. As you can see computor has to waste(not always) memory. Example go open notepad write A then save and close. Now look at it size it takes 1 byte
255 but you only put the value of 65 in there you see computors much take as much memory as the highest value you can write.


As you can see the cpu is not that complex, but simple because all it can do is get 0 or 1.


Step 4

-------------------\\\\\\\\\\\\\\\\\\\\ When do i get to create a assembler.---------------------////////////////


Note if any tells you building a assembler is hard they or not telling the truth they or easy very easy.


how well lets take steps you might want to know what happends to 
varibles when they or compile thats simple.


They or store and your EXE or COM.


Look at the example below


dim I as byte


I = 5


Now imagen that it compile into


0000-0001: mov ax,[0000-0003]


0000-0002: retn


0000-0003:5


As you can see varibles or store at the bottom of your exe.
As you can see many scripting langauge put the code at the buttom of a 
exe because if you touch the top or the middle its offsets changes. This trows off the Cpu when trying find a varibles. This usually causes a error.

 
When a register(a true place where the cpu can store data) wants a varible it must goto its offset store and the exe.




Now you must learn about the stack somthing else that is stored and your exe here is a little test go open up a exe with an hex editor.


you see bunch of 0's well this is the stack


And assembly you can choose your stack sizes. This is good because the more stack you have the bigger you exe is. I know what is the stack good for well if your compiling someone code and run out of register or want to save somthing for later you put it in a place called the stack like this


push ax


push bx


Those two commands push ax and bx into the stack a safe place in the exe. Here is a little test. c++ only because it has in-line assembly.


void main()


{


int i = 5;

 
asm


 {
	


 	push i


 }


i = 3;


 asm

	
 {
	


	pop i
	


 }
 


// i now holds five again


}


Pretty cool trick it can be simulated in Other lnagauges like visual basic. Right now i'm building a dos emulator in pure vb e-mail at vbmew@hotmail.com if you want to help.


As you can see the stack is pretty cool now you really want to build a assembler, so you must learn about what happends to lables this example is in VB


goto k


K:


msgbox K


And mahcine code K would translate into Nothing thats right nothing, but goto k would translate into


jmp 1


That means jump one spaces ahead,Becuase machine can't hold labels and memory you must do that.You might be saying give me a assembler example and c++ and VB well i'm going to that now


Visual Basic example of assembler


open "Kewl.com" for output as #1


	print #1,&hc3


close #1


That writes a exe with one command. The command is return so you could do somthing like this


if CurrentCommand = "Return" then


 print#1,&hc3


end if


I know you want more commands well try this


open "Kewl.com" for output as #1


	print #1,&hb4
	


	print #1,&h00
	


	print #1,&hcd
	


	print #1,&h16
	


close #1


That waits for a keypress here is the assembly version


mov ah,0


int 16h


retn


Simple huh?


Don't worry C++ users here is your example


	ofstream fout("kewl.com");
	


	fout << 0xb4;
	


	fout << 0x00;
	


	fout << 0xcd;
	


	fout << 0x16;
 	


	fout.close();


Does the same exact thing as Visual Basic.


Here is a very complicated example and Visual Basic. Note this example is not legel
Because there is no Bit type in Visual basic, i use the bit type for simplicity sake.


Dim I as bit


dim J as bit


I = 5


J = I


Now what would that assemble to. Thats simple you must increase the exe size
2 bits to hold those varibles


0000:0000 = mov ax,[0000:0004] 


0000:0001 = mov bx,[0000:0005]


0000:0002 = mov ax,bx


0000:0003 = mov ax,[0000:0005]

2 Bit Increase


0000:0004= 5


0000:0005= 0


Now incase you don't understand here is what happends


 First we move ax(a register) to offset 0000:0004 
 Which contains 5
then we move bx to 0000:0004 which holds 0(Visual basic make unintalize varibles 0)
 now we say ax = bx. Then write it back to the exe 


Of course this way is terrible you want to use the stack for this
we can simulate this in c++ like this 


byte i;


byte j;


asm


{


 mov i,5


 push i


 pop j


}


That is how it should be done, this way we can preserve memory.



Step 5

------------------\\\\\\\\\\\\\\\\ Understand High Level Commannds-----------////////////


Here is a question many of you been wondering, "How does the compiler translate commands
 like print or cout "


thats easy look at the visual basic example below


print "A" 


Note i'm using one charecter only to keep it simple


here is what it assembles to


mov ah,2


mov dl,65


int 21h


Handle mutilple chars would require advance understanding of the stack and machine code


Step 6

-------------------\\\\\\\\\\\\\\\\\\ Example of a assembler--------------------\\\\\


Here is what you all been waiting for an example assembler I will type a very very small one just to get you started



Visual basic exmaple 


First go make c:\1.txt and put in it "quit" and new line then "quit"


now open visual basic and type


dim Command as string


dim Output as string 'use long if you have problems


sub Compile()


open "c:\1.txt" for input as #1


do while not eof(1)


 line input #1,Command


	


	if lcase(command) = "quit" then 'visual basic does not have case sen commands


	output = output & &hc3


	end if


	loop


close #1


end sub



sub WriteCom() 'no header


 open "c:\1.com" for output as #1


 	print #1,output


 close #1


end sub


 



Last Step the stack

------------->>>>>>>>>>>>>How to pass paremeters-------->>>>>>>>>>>>>>>>>>>>>>>>>>


As you know many high level languages allow you to do statments like this
MessageBox(NULL,"Hi","Cap",MB_OK). But did you ever wonder how they pass those paremters thats easy though the stack. Here is a assembly example of the msgbox which takes 4
paremters


mov eax,NULL


mov ebx,"Hi"


mov ecx,"Cap"


mov edx,6 


push edx


push ecx


push ebx


push eax


Call MessageBox


As you can see we must push it in Backwords, well not quit, you see the stack is LIFO which means

 LAST IN FIRST OUT


so the stack is like this
---------


NULL


-----------


"HI"


-----------


"Cap"


---------------
6


----------------


If we push eax first then it would be at the bottom. Here is how MessageBox reads from the stack Note you can not assemble this, statment won't work


mov eax,[sp+4]


push eax


2DrawMeONWindow


pop eax


mov ebx,[sp+2]
push ebx


push eax


SetWindowCaption


pop eax


pop ebx


As you can see this statments not complete but it gives you a ideal on how passing paremters
work. Lets go into farther detil.


int kewl(int cool,int kool)


{


	cool = 3;


	kool = 4;


}


Here is how the compiler breaks it down


1.Step one Define Paremters 


2.Got 2, push them into stack


3.Someone is using cool = 3

 
4.cool is at the bottom of a stack size that is 2*2


5.Need register eax: mov eax,[sp+4]


6.Now eax holds three, no writting to exe because the varible is not global so I can let it disapear


7.kool is begin used, kewl is at the top 


8.eax is still free so mov eax,[sp+2]


9.Done


Ok so it doesn't happen exacly like that but its close



As you can see I brought up a new question how come global varibles stay
and locals disapear thats easy.They or never writting to the exe or push into the stack there is no need to.
 


Bounus Chapture some high level translation
I have tried and tried to paste them here but it wouldn't work so e-mail me with the subject
High Level. Then i will give you the commands


But i have a few i can give you on the spot


Me++;



push valueofme


pop ax


inc ax


push ax



Thats Its e-mail me for more

I know this is not enough to build a assembler
So if you want to build a assembler e-mail at vbmew@hotmail.com and Join the team we or building a assembler and pure vb


also i'm building one in c++ but is a high level language call blazing rain e-mail at y2j55@hotmail.com for if you want to join




Please leave feedback or vote


