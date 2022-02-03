# Requirements:
## Introduction:
A simple chat application that allows a parent and its child process(es) to send text messages to each other. The character limit is 140. A transcript of the entire conversation can be obtained by the user on request. The application uses Interprocess communication through a shared memory space. Initially written as a reader writer program, updates were made to the original version to make sure the parent and its child can both read and write from the shared memory space. This application can currently facilitate communication between a parent and its child only.

## Research:
Numerous examples of applications which employ Inter Process Communication were observed. A simple reader writer program was implemented initially. Applications based on other IPCs such as signals and message queues were also observed.

## Cost and Features and Timeline:
Initially began as a simple reader writer program. Updates were made to this application so that both the reader and writer programs could perform both read and write operations on the shared memory segment. Since both the reader and writer programs essentially used the same code, forking one of the two programs seemed to be a better solution. After this, a text file is used for recording the transcript of the entire communication.
     

## Defining Our System:
Our application is a two-process texting appilcation that can provide a transcript of the entire conversation instead of just retrieving the latest write to the shared memory(the last message written to the shared memory in this case).


## SWOT Analysis:
Strengths - Can perform the basic function i.e., a text communication between the parent and the child processes.
Weaknesses - The application can currently support IPC between only two processes. Other functionality has not been fully developed.
Opportunities - Can be developed to implement a chat between multiple processes on different systems.
Threats - Some parts of code are in the initial phase of testing. 

## 4W's and 1'H:
#### Who:
Anybody who is interested in a text chain communication.

#### What:
A prototype for a comprehensive text messaging application.

#### When:
Can be developed to its fullest potential in a few months of work.

#### Where:
Preferably on Linux based systems. 

#### How:
Most part of the application's code is in C.



## Detail requirements:

### High Level Requirements:

| ID | Description                                                                              |Status|
|:--:|:----------------------------------------------------------------------------------------:|:----:|
|  1 | Can allow both the users to send a text message to each other(currently 140 chars only)  | Implemented |
|  2 | A transcript that records the entire conversation between both the processes | Implemented |
|  3 | Parent does not start executing until the child completes its execution | Implemented |



### Low Level Requirements:
        
| ID | Description                                                                                                     |Status|
|:--:|:---------------------------------------------------------------------------------------------------------------:|:----:|
|  1 | Can read an entire sentence from the user and not just one word | To be Implemented |
|  2 | Transcript can be printed whenever either of the user calls it | Implemented |
|  3 | Invalid inputs will be handled and pointed out to the user | Implemented |

