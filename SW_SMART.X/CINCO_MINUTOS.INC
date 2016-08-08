;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;CINCO_MINUTOS.INC;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;RETARDOS DE 5 MINUTOS APROXIMADAMENTE EN EL CUAL SE MANTIENE ENCENDIDA LA LAMPARA DE LA HABITACION
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

    CBLOCK
    time0           ;REGISTROS PARA LOS RETARDOS
    time1
    time2
    time3
    ENDC

TIME0:;PIR, CARGA EL TIEMPO DE ESPERA QUE ESTE ENCENDIDA LA LAMPARA
        ;TIEMPO DE 5 MINNUTOS APROXIMADAMENTE
    	movlw	h'f4'	;carga valor para el tiempo deseado/ Delay_main
        movwf	time2	;0x0A <-- es una posicion por default, adaptar a su programa
Delay_2	movlw	h'9b'	;carga valor para el tiempo deseado
        movwf	time1	;0x09 <-- es una posicion por default, adaptar a su programa
Delay_1	movlw	h'db'	;carga valor para el tiempo deseado
        movwf	time0	;0x08 <-- es una posicion por default, adaptar a su programa
       BTFSC   SW
       GOTO    APAGA
        BTFSC   PIR     ;EN EL PROCESO DEL DECREMETO DEL TIEMPO, EXISTE PRENSENCIA RESETA EL TIEMPO
        GOTO    TIME0   ;Y VUELVE A COMENZARDE NUEVO
Delay_0	decfsz	time0,f	;decremnta y espera a que termine
        goto	Delay_0	;regresa a Delay_0
        decfsz	time1,f	;decrementa time1
        goto	Delay_1	;regresa a Delay_1
        decfsz	time2,f	;decrementa time1
        goto	Delay_2	;regresa a Delay_1

        movlw	h'f4'	;carga valor para el tiempo deseado/ Delay_main
        movwf	time2	;0x0A <-- es una posicion por default, adaptar a su programa
Delay_2V	movlw	h'9b'	;carga valor para el tiempo deseado
        movwf	time1	;0x09 <-- es una posicion por default, adaptar a su programa
Delay_1V	movlw	h'db'	;carga valor para el tiempo deseado
        movwf	time0	;0x08 <-- es una posicion por default, adaptar a su programa
        BTFSC   SW
        GOTO    APAGA
        BTFSC   PIR     ;EN EL PROCESO DEL DECREMETO DEL TIEMPO, EXISTE PRENSENCIA RESETA EL TIEMPO
        GOTO    TIME0   ;Y VUELVE A COMENZARDE NUEVO
Delay_0V	decfsz	time0,f	;decremnta y espera a que termine
        goto	Delay_0V	;regresa a Delay_0
        decfsz	time1,f	;decrementa time1
        goto	Delay_1V	;regresa a Delay_1
        decfsz	time2,f	;decrementa time1
        goto	Delay_2V	;regresa a Delay_1

        movlw	h'f4'	;carga valor para el tiempo deseado/ Delay_main
        movwf	time2	;0x0A <-- es una posicion por default, adaptar a su programa
Delay_2W	movlw	h'9b'	;carga valor para el tiempo deseado
        movwf	time1	;0x09 <-- es una posicion por default, adaptar a su programa
Delay_1W	movlw	h'db'	;carga valor para el tiempo deseado
        movwf	time0	;0x08 <-- es una posicion por default, adaptar a su programa
        BTFSC   SW
        GOTO    APAGA
        BTFSC   PIR     ;EN EL PROCESO DEL DECREMETO DEL TIEMPO, EXISTE PRENSENCIA RESETA EL TIEMPO
        GOTO    TIME0   ;Y VUELVE A COMENZARDE NUEVO
Delay_0W	decfsz	time0,f	;decremnta y espera a que termine
        goto	Delay_0W	;regresa a Delay_0
    	decfsz	time1,f	;decrementa time1
        goto	Delay_1W	;regresa a Delay_1
        decfsz	time2,f	;decrementa time1
        goto	Delay_2W	;regresa a Delay_1

    	GOTO    OFF_PIR ;TERMINADO ESOS 5 MIN VERIFICARA AL SENSOR PIR Y DEPENDIENDO DEL
                        ;RESULATADO APAGA O MANTIENE LA LAMPARA ENCENDIDA

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

TIME1:; TIEMPO DEL SW-INFRARROJO
        ;TIEMPO DE 5 MINNUTOS APROXIMADAMENTE
    	    	movlw	h'f4'	;carga valor para el tiempo deseado/ Delay_main
        movwf	time2	;0x0A <-- es una posicion por default, adaptar a su programa
Delay_2E	movlw	h'9b'	;carga valor para el tiempo deseado
        movwf	time1	;0x09 <-- es una posicion por default, adaptar a su programa
Delay_1E	movlw	h'db'	;carga valor para el tiempo deseado
        movwf	time0	;0x08 <-- es una posicion por default, adaptar a su programa
        BTFSC   SW
        GOTO    APAGA
        BTFSC   PIR     ;EN EL PROCESO DEL DECREMETO DEL TIEMPO, EXISTE PRENSENCIA RESETA EL TIEMPO
        GOTO    TIME1   ;Y VUELVE A COMENZARDE NUEVO
Delay_0E	decfsz	time0,f	;decremnta y espera a que termine
        goto	Delay_0E	;regresa a Delay_0
        decfsz	time1,f	;decrementa time1
        goto	Delay_1E	;regresa a Delay_1
        decfsz	time2,f	;decrementa time1
        goto	Delay_2E	;regresa a Delay_1

        movlw	h'f4'	;carga valor para el tiempo deseado/ Delay_main
        movwf	time2	;0x0A <-- es una posicion por default, adaptar a su programa
Delay_2G	movlw	h'9b'	;carga valor para el tiempo deseado
        movwf	time1	;0x09 <-- es una posicion por default, adaptar a su programa
Delay_1G	movlw	h'db'	;carga valor para el tiempo deseado
        movwf	time0	;0x08 <-- es una posicion por default, adaptar a su programa
        BTFSC   SW
        GOTO    APAGA
        BTFSC   PIR     ;EN EL PROCESO DEL DECREMETO DEL TIEMPO, EXISTE PRENSENCIA RESETA EL TIEMPO
        GOTO    TIME1   ;Y VUELVE A COMENZARDE NUEVO
Delay_0G	decfsz	time0,f	;decremnta y espera a que termine
        goto	Delay_0G	;regresa a Delay_0
        decfsz	time1,f	;decrementa time1
        goto	Delay_1G	;regresa a Delay_1
        decfsz	time2,f	;decrementa time1
        goto	Delay_2G	;regresa a Delay_1

        movlw	h'f4'	;carga valor para el tiempo deseado/ Delay_main
        movwf	time2	;0x0A <-- es una posicion por default, adaptar a su programa
Delay_2Z	movlw	h'9b'	;carga valor para el tiempo deseado
        movwf	time1	;0x09 <-- es una posicion por default, adaptar a su programa
Delay_1Z	movlw	h'db'	;carga valor para el tiempo deseado
        movwf	time0	;0x08 <-- es una posicion por default, adaptar a su programa
        BTFSC   SW
        GOTO    APAGA
        BTFSC   PIR     ;EN EL PROCESO DEL DECREMETO DEL TIEMPO, EXISTE PRENSENCIA RESETA EL TIEMPO
        GOTO    TIME1   ;Y VUELVE A COMENZARDE NUEVO
Delay_0Z	decfsz	time0,f	;decremnta y espera a que termine
        goto	Delay_0Z	;regresa a Delay_0
    	decfsz	time1,f	;decrementa time1
        goto	Delay_1Z	;regresa a Delay_1
        decfsz	time2,f	;decrementa time1
        goto	Delay_2Z	;regresa a Delay_1

        BTFSC   PIR     ;VERIFICA ANTES DE APAGAR QUE NO HAYA PRESENCIA EN EL CUARTO
        GOTO    OFF_PIR ;COMO HAY PRESENCIA VERIFICA LA LUZ Y MANTIENE LA LAMPARA ENCENDIDA
        BCF     LP      ;APAGA LA LAMPARA PORQUE NO HAY PRESENCIA EN EL CUARTO
        GOTO    MAIN    ;VERIFICARA EL SW OPTICO Y EL SENSOR PIR
;*********************************************************************************************************
REBOTE:;TIEMPO DE ESPERA POR REBOTES Y ASEGURARSE QUE FUE PRESIONADO DE 20 MS
        movlw	h'63'	;carga valor para el tiempo deseado/ Delay_main
        movwf	time1	;0x08 <-- es una posicion por default, adaptar a su programa
Delay_1X movlw	h'42'	;carga valor para el tiempo deseado
        movwf	time0	;0x09 <-- es una posicion por default, adaptar a su programa
Delay_0X decfsz	time0,f	;decremnta y espera a que termine
        goto	Delay_0X	;regresa a Delay_0
        decfsz	time1,f	;decrementa time1
        goto	Delay_1X	;regresa a Delay_1
        RETURN
;**********************************************************************************************************