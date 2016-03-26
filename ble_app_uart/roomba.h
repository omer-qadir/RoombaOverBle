#ifndef APP_ROOMBA_H__
#define APP_ROOMBA_H__

#define ROOMBA_CMD_START								128
#define ROOMBA_CMD_ENTER_SAFE_MODE			131
#define ROOMBA_CMD_ENTER_FULL_MODE			132
#define ROOMBA_CMD_POWER_OFF						133
#define ROOMBA_CMD_CLEAN								135
#define ROOMBA_CMD_DOCK									143


//#define ROOMBA_NULL_TERM_CMD(OPCODE)		((const char*)(OPCODE<<8 | '\0'))
__STATIC_INLINE void roombaPrintfCmd (uint8_t cmd){
	uint8_t nullTerminatedCommand[2] = {cmd, '\0'};
	printf( (const char*)nullTerminatedCommand );
}

__STATIC_INLINE void ITM_SendString (uint8_t *str) {
	for (int ii=0; ii< strlen((const char*)str); ii++)
		ITM_SendChar (str[ii]);
}

#endif
