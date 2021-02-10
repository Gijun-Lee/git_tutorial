#define LAYOUT_C

#include "Board.h"
#include "layout.h"




//=====================================================================
//
// local definition
//
//=====================================================================



//=====================================================================
//
// static variables 
//
//=====================================================================



//=====================================================================
//
// static function definition
//
//=====================================================================



//=====================================================================
//
// global variables
//
//=====================================================================



//=====================================================================
//
// public functions
//
//=====================================================================



//=====================================================================
//
// static functions
//
//=====================================================================


/*
* @brief    BK1080 I2C write
* @details  
* @param    ucSlaveAddr             0x80
* @param    CommandCode             BK1080 register 번호. (CommandCode * 2) 한 값을 기록한다.
* @param    *pBuf                   기록할 데이터 버퍼
* @param    dataLen                 기록할 데이터 길이
* @return   None
*/
