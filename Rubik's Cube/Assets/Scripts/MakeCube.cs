using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MakeCube : MonoBehaviour
{
    public GameObject Cubelet;
    //create cube with 6 sides and 9 cubelets on each side
    /*  Array       Net Shape:                                  Colours:                          
        0, 1, 2        0                    up                     B           
        3, 4, 5     1, 2, 3, 4      left  front  right  back    W  R  Y  O      
        6, 7, 8        5                    down                   G               

        Map:
                      0. 0, 1, 2,
                         3, 4, 5,
                         6, 7, 8,
        
       1. 0, 1, 2,    2. 0, 1, 2,     3. 0, 1, 2,     4. 0, 1, 2,
          3, 4, 5,       3, 4, 5,        3, 4, 5,        3, 4, 5,
          6, 7, 8,       6, 7, 8,        6, 7, 8,        6, 7, 8,     

                      5. 0, 1, 2,
                         3, 4, 5,
                         6, 7, 8,

        4's are centre points (6):    even numbers are corners (4x2):       odd numbers are middle edges (4x3):
            cube[0, 4]                  cube[0, 0]    [1, 0]   [4, 2]         cube [0, 1]     [4, 1]
            cube[1, 4]                  cube[0, 2]    [3, 2]   [4, 0]         cube [0, 3]     [1, 1]
            cube[2, 4]                  cube[0, 6]    [1, 2]   [2, 0]         cube [0, 5]     [3, 1] 
            cube[3, 4]                  cube[0, 8]    [3, 0]   [2, 2]         cube [0, 7]     [2, 1]
            cube[4, 4]                      
            cube[5, 4]                  cube[1, 6]    [4, 8]   [5, 6]         cube [1, 3]     [4, 5]                                
                                        cube[1, 8]    [2, 6]   [5, 0]         cube [1, 5]     [2, 3]                                
                                        cube[2, 8]    [3, 6]   [5, 2]         cube [1, 7]     [5, 3]
                                        cube[3, 8]    [4, 6]   [5, 8]         cube [2, 5]     [3, 3]
                                                                              
                                                                              cube [2, 7]     [5, 1]
                                                                              cube [3, 5]     [4, 3]
                                                                              cube [3, 7]     [5, 5]
                                                                              cube [4, 7]     [5, 7]                                                               
    */
    int[,] cube = new int[,] { {0, 0, 0, 0, 0, 0, 0, 0, 0,},          
                               {1, 1, 1, 1, 1, 1, 1, 1, 1,},                               
                               {2, 2, 2, 2, 2, 2, 2, 2, 2,},          
                               {3, 3, 3, 3, 3, 3, 3, 3, 3},           
                               {4, 4, 4, 4, 4, 4, 4, 4, 4},
                               {5, 5, 5, 5, 5, 5, 5, 5, 5}};

    string printCube(){
		string total = "";
		for (int i = 0; i < 3; i++) 
			total += System.String.Format("\t{0},{1},{2},\n", cube[0,3*i], cube[0,1+ (3*i)], cube[0,+ (3*i)]);
		total += "\n";
		for (int i = 0; i < 3; i++) 
			total += System.String.Format ("{0},{1},{2},    {3},{4},{5},    {6},{7},{8},    {9},{10},{11},\n", cube [1, 0 + (3 * i)], cube [1, 1 + (3 * i)], cube [1, 2 + (3 * i)], cube [2, 0 + (3 * i)], cube [2, 1 + (3 * i)], cube [2, 2 + (3 * i)], cube [3, 0 + (3 * i)], cube [3, 1 + (3 * i)], cube [3, 2 + (3 * i)], cube [4, 0 + (3 * i)], cube [4, 1 + (3 * i)], cube [4, 2 + (3 * i)]);
		total += "\n";
		for (int i = 0; i < 3; i++) 
			total += System.String.Format("\t{0},{1},{2},\n", cube[5,0+ (3*i)], cube[5,1+ (3*i)], cube[5,2+ (3*i)]);
		
		return total;
	}


    // Start is called before the first frame update
    void Start()
    {
        Debug.Log(printCube ());
        //stack cubelets on top of each other to form cube
        for(int x = 0; x < 3; x++){
            for(int y = 0; y < 3; y++){
                for(int z = 0; z < 3; z++){
                    Instantiate(Cubelet, new Vector3 (x, y, z), new Quaternion (0, 0, 0, 0));
                }
            }
        }
    }
}
