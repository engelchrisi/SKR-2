#pragma message("==========================================================")

#if 1
  #define SEPARATOR "------------"

  ///////////////////////////////////////////////////////////
  // @CE@ list precompiler macros
  /* definition to expand macro then apply to pragma message */
  // https://stackoverflow.com/questions/1562074/how-do-i-show-the-value-of-a-define-at-compile-time
  #define VALUE_TO_STRING(x) #x
  #define VALUE(x) VALUE_TO_STRING(x)
  #define VAR_NAME_VALUE(var) #var "=" VALUE(var)
  #define VAR_NAME_DEFINED(var) #var "= <DEFINED>"
  #define VAR_NAME_UNDEFINED(var) #var "= <UNDEFINED>"

  #pragma message(VAR_NAME_VALUE(MOTHERBOARD))
  #pragma message(VAR_NAME_VALUE(BOARD_BTT_SKR_V2_0_REV_B))
  #pragma message(SEPARATOR)

#endif

#pragma message(VAR_NAME_VALUE(E0_AUTO_FAN_PIN))
#pragma message(VAR_NAME_VALUE(FAN_PIN)) // => pins_BTT_SKR_V2_0_common.h
#pragma message(VAR_NAME_VALUE(FAN1_PIN))
#pragma message(VAR_NAME_VALUE(FAN2_PIN))
#pragma message(VAR_NAME_VALUE(EXTRUDER_AUTO_FAN_TEMPERATURE))
#pragma message(VAR_NAME_VALUE(EXTRUDER_AUTO_FAN_SPEED))
#pragma message(SEPARATOR)

#ifdef REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER
  #pragma message(VAR_NAME_DEFINED(REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER))
#else
  #pragma message(VAR_NAME_UNDEFINED(REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER))
#endif
#pragma message(VAR_NAME_VALUE(IS_ULTRA_LCD))
#pragma message(VAR_NAME_VALUE(HAS_WIRED_LCD))
#pragma message(VAR_NAME_VALUE(HAS_LCD_MENU))
#pragma message(VAR_NAME_VALUE(IS_ULTIPANEL))
#ifdef MKS_MINI_12864
  #pragma message(VAR_NAME_DEFINED(MKS_MINI_12864))
#else
  #pragma message(VAR_NAME_UNDEFINED(MKS_MINI_12864))
#endif
#ifdef CR10_STOCKDISPLAY
  #pragma message(VAR_NAME_DEFINED(CR10_STOCKDISPLAY))
#else
  #pragma message(VAR_NAME_UNDEFINED(CR10_STOCKDISPLAY))
#endif
#pragma message(VAR_NAME_VALUE(HAS_MARLINUI_U8GLIB))
#pragma message(SEPARATOR)


#if 1
  #pragma message(VAR_NAME_VALUE(HAS_TRINAMIC_CONFIG))
  #pragma message(VAR_NAME_VALUE(X_DRIVER_TYPE))
  #pragma message(VAR_NAME_VALUE(Y_DRIVER_TYPE))
  #pragma message(VAR_NAME_VALUE(NUM_Z_STEPPER_DRIVERS))
  #pragma message(VAR_NAME_VALUE(Z_DRIVER_TYPE))
  #pragma message(VAR_NAME_VALUE(Z2_DRIVER_TYPE))
  #pragma message(VAR_NAME_VALUE(E0_DRIVER_TYPE))


  #pragma message(VAR_NAME_VALUE(INVERT_X_DIR))
  #pragma message(VAR_NAME_VALUE(INVERT_Y_DIR))
  #pragma message(VAR_NAME_VALUE(INVERT_Z_DIR))  
  #pragma message(VAR_NAME_VALUE(INVERT_E0_DIR))  

  #pragma message(VAR_NAME_VALUE((DEFAULT_AXIS_STEPS_PER_UNIT)))
  #pragma message(VAR_NAME_VALUE((DEFAULT_MAX_ACCELERATION)))

  #pragma message(VAR_NAME_VALUE((CHOPPER_TIMING)))

  #pragma message(VAR_NAME_VALUE(X_CURRENT))
  #pragma message(VAR_NAME_VALUE(Y_CURRENT))
  #pragma message(VAR_NAME_VALUE(Z_CURRENT))
  #pragma message(VAR_NAME_VALUE(Z2_CURRENT))
  #pragma message(VAR_NAME_VALUE(E0_CURRENT))

  #pragma message(VAR_NAME_VALUE(X_HOME_DIR))  
  #pragma message(VAR_NAME_VALUE(Y_HOME_DIR))  
  #pragma message(VAR_NAME_VALUE(Z_HOME_DIR))  

  #ifdef USE_XMIN_PLUG
    #pragma message(VAR_NAME_DEFINED(USE_XMIN_PLUG))
  #else
    #pragma message(VAR_NAME_UNDEFINED(USE_XMIN_PLUG))
  #endif
  #ifdef USE_YMIN_PLUG
    #pragma message(VAR_NAME_DEFINED(USE_YMIN_PLUG))
  #else
    #pragma message(VAR_NAME_UNDEFINED(USE_YMIN_PLUG))
  #endif
  #ifdef USE_ZMIN_PLUG
    #pragma message(VAR_NAME_DEFINED(USE_ZMIN_PLUG))
  #else
    #pragma message(VAR_NAME_UNDEFINED(USE_ZMIN_PLUG))
  #endif    
  
  #ifdef MONITOR_DRIVER_STATUS
    #pragma message(VAR_NAME_DEFINED(MONITOR_DRIVER_STATUS))
  #else
    #pragma message(VAR_NAME_UNDEFINED(MONITOR_DRIVER_STATUS))
  #endif
  #ifdef SENSORLESS_HOMING
    #pragma message(SEPARATOR)  
    #pragma message(VAR_NAME_DEFINED(SENSORLESS_HOMING))
    #pragma message(VAR_NAME_VALUE(X_STALL_SENSITIVITY))      
    #pragma message(VAR_NAME_VALUE(Y_STALL_SENSITIVITY))      
    #pragma message(VAR_NAME_VALUE(Z_STALL_SENSITIVITY))      // not used with probe
    #pragma message(SEPARATOR)    
  #else
    #pragma message(VAR_NAME_UNDEFINED(SENSORLESS_HOMING))
  #endif
  #ifdef TMC_DEBUG
    #pragma message(VAR_NAME_DEFINED(TMC_DEBUG))
  #else
    #pragma message(VAR_NAME_UNDEFINED(TMC_DEBUG))
  #endif

  #ifdef CLASSIC_JERK
    #pragma message(VAR_NAME_DEFINED(CLASSIC_JERK))
  #else
    #pragma message(VAR_NAME_UNDEFINED(CLASSIC_JERK))
  #endif

  
  #ifdef FILAMENT_RUNOUT_SENSOR
    #pragma message(VAR_NAME_DEFINED(FILAMENT_RUNOUT_SENSOR))
  #else
    #pragma message(VAR_NAME_UNDEFINED(FILAMENT_RUNOUT_SENSOR))
  #endif
  #pragma message(SEPARATOR)
#endif

#ifdef BLTOUCH

  #ifdef BABYSTEPPING 
  #pragma message(VAR_NAME_DEFINED(BABYSTEPPING)) 
  #else
  #pragma message(VAR_NAME_UNDEFINED(BABYSTEPPING))
  #endif
  #ifdef BABYSTEP_ZPROBE_OFFSET 
  #pragma message(VAR_NAME_DEFINED(BABYSTEP_ZPROBE_OFFSET))  
  #else
  #pragma message(VAR_NAME_UNDEFINED(BABYSTEP_ZPROBE_OFFSET))
  #endif  

  #pragma message(VAR_NAME_DEFINED(BLTOUCH))
  #pragma message(VAR_NAME_VALUE(BLTOUCH_DELAY)) 
  #ifdef BLTOUCH_SET_5V_MODE 
  #pragma message(VAR_NAME_DEFINED(BLTOUCH_SET_5V_MODE)) 
  #else
  #pragma message(VAR_NAME_UNDEFINED(BLTOUCH_SET_5V_MODE))
  #endif
  #ifdef FIX_MOUNTED_PROBE 
  #pragma message(VAR_NAME_DEFINED(FIX_MOUNTED_PROBE)) 
  #else
  #pragma message(VAR_NAME_UNDEFINED(FIX_MOUNTED_PROBE))
  #endif
  #ifdef RESTORE_LEVELING_AFTER_G28 
  #pragma message(VAR_NAME_DEFINED(RESTORE_LEVELING_AFTER_G28)) 
  #else
  #pragma message(VAR_NAME_UNDEFINED(RESTORE_LEVELING_AFTER_G28))
  #endif  
  #ifdef Z_SAFE_HOMING 
  #pragma message(VAR_NAME_DEFINED(Z_SAFE_HOMING)) 
  #else
  #pragma message(VAR_NAME_UNDEFINED(Z_SAFE_HOMING))
  #endif    

  #pragma message(VAR_NAME_VALUE(Z_HOME_TO_MIN))
  #pragma message(VAR_NAME_VALUE(USES_Z_MIN_PROBE_PIN))
  #ifdef USE_PROBE_FOR_Z_HOMING 
  #pragma message(VAR_NAME_DEFINED(USE_PROBE_FOR_Z_HOMING))  // !!! => HOMING_Z_WITH_PROBE = 1
  #else
  #pragma message(VAR_NAME_UNDEFINED(USE_PROBE_FOR_Z_HOMING))
  #endif    
  #ifdef HOMING_Z_WITH_PROBE 
  #pragma message(VAR_NAME_DEFINED(HOMING_Z_WITH_PROBE)) 
  #else
  #pragma message(VAR_NAME_UNDEFINED(HOMING_Z_WITH_PROBE))
  #endif      
  #pragma message(VAR_NAME_VALUE(BLTOUCH_DEPLOY))
  #pragma message(VAR_NAME_VALUE(BLTOUCH_STOW))

  #pragma message(SEPARATOR) 
#endif

#pragma message(VAR_NAME_VALUE(Z_PROBE_SERVO_NR))
// #pragma message(VAR_NAME_VALUE(SERVO0_PIN))
#pragma message(SEPARATOR)

#pragma message(VAR_NAME_VALUE(Z_MIN_PROBE_ENDSTOP_INVERTING))
#pragma message(VAR_NAME_VALUE(Z_MIN_ENDSTOP_INVERTING))
// #pragma message(VAR_NAME_VALUE(Z_MIN_PIN))
// #pragma message(VAR_NAME_VALUE(Z_MAX_PIN))
#pragma message(SEPARATOR)

#ifdef HAS_Z_SERVO_ENDSTOP
  #pragma message(VAR_NAME_DEFINED(HAS_Z_SERVO_ENDSTOP))
#else
  #pragma message(VAR_NAME_UNDEFINED(HAS_Z_SERVO_ENDSTOP))
#endif
#ifdef Z_MIN_PROBE_USES_Z_MIN_ENDSTOP_PIN
  #pragma message(VAR_NAME_DEFINED(Z_MIN_PROBE_USES_Z_MIN_ENDSTOP_PIN))
#else
  #pragma message(VAR_NAME_UNDEFINED(Z_MIN_PROBE_USES_Z_MIN_ENDSTOP_PIN))
#endif
#ifdef Z_MIN_PROBE_ENDSTOP
  #pragma message(VAR_NAME_DEFINED(Z_MIN_PROBE_ENDSTOP))
#else
  #pragma message(VAR_NAME_UNDEFINED(Z_MIN_PROBE_ENDSTOP))
#endif
#pragma message(SEPARATOR)

// Bed
#pragma message(VAR_NAME_VALUE(X_BED_SIZE))
#pragma message(VAR_NAME_VALUE(Y_BED_SIZE))
#pragma message(SEPARATOR)

#ifdef AUTO_BED_LEVELING_UBL
  #pragma message(VAR_NAME_DEFINED(AUTO_BED_LEVELING_UBL))
#else
  #pragma message(VAR_NAME_UNDEFINED(AUTO_BED_LEVELING_UBL))
#endif
#pragma message(VAR_NAME_VALUE(MESH_INSET))
#pragma message(VAR_NAME_VALUE(MESH_MIN_X))
#pragma message(VAR_NAME_VALUE(MESH_MAX_X))
#pragma message(VAR_NAME_VALUE(MESH_MIN_Y))
#pragma message(VAR_NAME_VALUE(MESH_MAX_Y))
#ifdef AUTO_BED_LEVELING_BILINEAR
  #pragma message(VAR_NAME_DEFINED(AUTO_BED_LEVELING_BILINEAR))
#else
  #pragma message(VAR_NAME_UNDEFINED(AUTO_BED_LEVELING_BILINEAR))
#endif

#pragma message(VAR_NAME_VALUE(GRID_MAX_POINTS_X))
#pragma message(VAR_NAME_VALUE(PROBING_MARGIN))
// #pragma message(VAR_NAME_VALUE(PROBING_MARGIN_LEFT))
// #pragma message(VAR_NAME_VALUE(PROBING_MARGIN_FRONT))
#pragma message(VAR_NAME_VALUE((NOZZLE_TO_PROBE_OFFSET)))
#pragma message(SEPARATOR)

#pragma message(VAR_NAME_VALUE(TEMP_SENSOR_0))
#pragma message(VAR_NAME_VALUE(TEMP_SENSOR_BED))
#pragma message(VAR_NAME_VALUE(TEMP_SENSOR_PROBE))
#pragma message(SEPARATOR)

#pragma message(VAR_NAME_VALUE(HEATER_0_MINTEMP))
#pragma message(VAR_NAME_VALUE(HEATER_0_MAXTEMP))
#pragma message(VAR_NAME_VALUE(BED_MINTEMP))
#pragma message(VAR_NAME_VALUE(BED_MAXTEMP))
#pragma message(SEPARATOR)


#pragma message(VAR_NAME_VALUE(X_MIN_POS))
#pragma message(VAR_NAME_VALUE(Y_MIN_POS))
#pragma message(VAR_NAME_VALUE(Z_MIN_POS))

#pragma message(VAR_NAME_VALUE(X_MAX_POS))
#pragma message(VAR_NAME_VALUE(Y_MAX_POS))
#pragma message(VAR_NAME_VALUE(Z_MAX_POS))
#pragma message(SEPARATOR)

#ifdef PIDTEMP 
#pragma message(VAR_NAME_DEFINED(PIDTEMP))
#else
#pragma message(VAR_NAME_UNDEFINED(PIDTEMP))
#endif
#pragma message(VAR_NAME_VALUE(DEFAULT_Kp)) 
#pragma message(VAR_NAME_VALUE(DEFAULT_Ki)) 
#pragma message(VAR_NAME_VALUE(DEFAULT_Kd)) 
#pragma message(SEPARATOR)

#ifdef PIDTEMPBED 
#pragma message(VAR_NAME_DEFINED(PIDTEMPBED))
#else
#pragma message(VAR_NAME_UNDEFINED(PIDTEMPBED))
#endif
#pragma message(VAR_NAME_VALUE(DEFAULT_bedKp)) 
#pragma message(VAR_NAME_VALUE(DEFAULT_bedKi)) 
#pragma message(VAR_NAME_VALUE(DEFAULT_bedKd)) 
#pragma message(SEPARATOR)

#ifdef S_CURVE_ACCELERATION 
#pragma message(VAR_NAME_DEFINED(S_CURVE_ACCELERATION)) 
#else
#pragma message(VAR_NAME_UNDEFINED(S_CURVE_ACCELERATION))
#endif

#ifdef LIN_ADVANCE 
#pragma message(VAR_NAME_DEFINED(LIN_ADVANCE)) 
#else
#pragma message(VAR_NAME_UNDEFINED(LIN_ADVANCE))
#endif

#ifdef ARC_SUPPORT 
#pragma message(VAR_NAME_DEFINED(ARC_SUPPORT)) 
#else
#pragma message(VAR_NAME_UNDEFINED(ARC_SUPPORT))
#endif

#ifdef PINS_DEBUGGING 
#pragma message(VAR_NAME_DEFINED(PINS_DEBUGGING)) 
#else
#pragma message(VAR_NAME_UNDEFINED(PINS_DEBUGGING))
#endif
#pragma message(SEPARATOR)

#ifdef SDSUPPORT
  #pragma message(VAR_NAME_DEFINED(SDSUPPORT))
  #ifdef BINARY_FILE_TRANSFER
    #pragma message(VAR_NAME_DEFINED(BINARY_FILE_TRANSFER))
  #else
    #pragma message(VAR_NAME_UNDEFINED(BINARY_FILE_TRANSFER))
  #endif  
  #pragma message(VAR_NAME_VALUE(SDCARD_CONNECTION)) 
#else
  #pragma message(VAR_NAME_UNDEFINED(SDSUPPORT))
#endif


#pragma message("==========================================================")
