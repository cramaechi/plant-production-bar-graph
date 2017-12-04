# Plant Production Bar Graph
A program that reads in data for four manufacturing plants and displays a bar graph showing productivity for each plant.

## Setup
1. Download and install [Git](https://git-scm.com/downloads), if you don't already have it.

2. Open terminal and run the git clone command:

   ```
   $ git clone https://github.com/cramaechi/production-bar-graph.git
   ```
    or [download as ZIP](https://github.com/cramaechi/production-bar-graph/archive/master.zip).

3. Go to the project folder:

   ```
   $ cd production-bar-graph
   ```

4. Compile:

   ```
   $ make
   ```
   
## Usage
Run:

```
$ ./production_bar_graph
```

Sample Output:
```
This program displays a graph showing                                                                                 
production for each plant in the company.                                                                             
                                                                                                                      
Enter production data for plant number 1                                                                              
Enter number of units produced by each department.                                                                    
1212 1212 1211                                                                                                        
Total = 3635

Enter production data for plant number 2                                                                              
Enter number of units produced by each department.                                                                    
2121 2323 2322                                                                                                        
Total = 6766

Enter production data for plant number 3                                                                              
Enter number of units produced by each department.                                                                    
3113 3121 3211                                                                                                        
Total = 9445

Enter production data for plant number 4                                                                              
Enter number of units produced by each department.                                                                    
3898 3544 3844                                                                                                        
Total = 11286                                                                                                         
                                                                                                                      
Units produced in thousands of units:                                                                                 
                                                                                                                      
                                                           *                                                          
                                                           *                                                          
                                            *              *                                                          
                                            *              *                                                          
                             *              *              *                                                          
                             *              *              *                                                          
                             *              *              *                                                          
              *              *              *              *                                                          
              *              *              *              *                                                          
              *              *              *              *                                                          
              *              *              *              *                                                          
              Plant #1       Plant #2       Plant #3       Plant #4
```
