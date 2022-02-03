# Test Plan:

## High Level Test Plan:

|Test ID|                            Description                           |  Exp I/P   |  Exp O/P  |  Actual Output |  Type Of Test   |
|:-----:|:----------------------------------------------------------------:|:----------:|:---------:|:--------------:|:---------------:|
| H_01  | Both processes can send a message of upto 140 characters to each other.                 |A message from child to parent.      |Child reads the message from the parent.      |Child reads the message and prints it to standard output and to the transcript file   |Requirement Based |
| H_02  | A transcript that records both the processes messages is provided.             |3|  Transcript of the conversation.      |Transcript of the conversation. | Requirement Based |
| H_03  | Illegal inputs are pointed out to the user.   | 4  |Invalid Input. Enter either 1, 2 or 3.|Invalid Input. Enter either 1, 2 or 3. | Boundary Based |
        


## Low level test plan:

|Test ID|                            Description                           |  Exp I/P   |  Exp O/P  |  Actual Output |  Type Of Test   |
|:-----:|:----------------------------------------------------------------:|:----------:|:---------:|:--------------:|:---------------:|
| L_01  |The entire sentence entered by the either user is read. |"Hello World" |"Hello World" |"Hello World" | Requirements Based |
| L_02  |Text file can be opened and read-write operations can be performed on the file.|Read and write requests. |Successful read/write | Successful read/write  | Requirements Based |
| L_03  |Child process is executed first. Parent process waits for the child process to complete executing. | Not Applicable      | Not Applicable  | Not Applicable  |Requirements Based |
