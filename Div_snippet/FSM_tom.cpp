/******************************************************************************
Function name : void TestForState(void) 
         Type :
Description   : 
Notes :
******************************************************************************/
void TestForState(void){
/***************************   Local Variables   *****************************/
    switch (currentState) {
  /////////
         //
        case 0:{
               // Move to next state
               currentState = 1;
            break;            
        }  
    	// 
        case 1:{
             // Move to next state
             currentState = 2;
			break;
		}  
        //
        case 2:{
             // Move to next state
             currentState = 3;			
	        break;		  
            } 
        //   
        case 3:{
               // Move to next state
               currentState = 4;
			break;  
            }			
		//    
        case 4:{
               // Move to next state
               currentState = 5;			  
			break;
            }      
		//    
        case 5:{
               // Move to next state
               currentState = 0;			  
		      break;	
            } 

  /////////                      
        //    
        default:
		     // error if here
              currentState = 0;
            break;
  }
}