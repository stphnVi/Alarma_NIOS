/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'nios2_gen2_0' in SOPC Builder design 'CPU1'
 * SOPC Builder design path: ../../CPU1.sopcinfo
 *
 * Generated: Mon Aug 19 12:39:21 CST 2024
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2_gen2"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x00002820
#define ALT_CPU_CPU_ARCH_NIOS2_R1
#define ALT_CPU_CPU_FREQ 50000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "tiny"
#define ALT_CPU_DATA_ADDR_WIDTH 0xe
#define ALT_CPU_DCACHE_LINE_SIZE 0
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_DCACHE_SIZE 0
#define ALT_CPU_EXCEPTION_ADDR 0x00001020
#define ALT_CPU_FLASH_ACCELERATOR_LINES 0
#define ALT_CPU_FLASH_ACCELERATOR_LINE_SIZE 0
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 50000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 0
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 0
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_ICACHE_SIZE 0
#define ALT_CPU_INST_ADDR_WIDTH 0xe
#define ALT_CPU_NAME "nios2_gen2_0"
#define ALT_CPU_OCI_VERSION 1
#define ALT_CPU_RESET_ADDR 0x00001000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x00002820
#define NIOS2_CPU_ARCH_NIOS2_R1
#define NIOS2_CPU_FREQ 50000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "tiny"
#define NIOS2_DATA_ADDR_WIDTH 0xe
#define NIOS2_DCACHE_LINE_SIZE 0
#define NIOS2_DCACHE_LINE_SIZE_LOG2 0
#define NIOS2_DCACHE_SIZE 0
#define NIOS2_EXCEPTION_ADDR 0x00001020
#define NIOS2_FLASH_ACCELERATOR_LINES 0
#define NIOS2_FLASH_ACCELERATOR_LINE_SIZE 0
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 0
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 0
#define NIOS2_ICACHE_LINE_SIZE_LOG2 0
#define NIOS2_ICACHE_SIZE 0
#define NIOS2_INST_ADDR_WIDTH 0xe
#define NIOS2_OCI_VERSION 1
#define NIOS2_RESET_ADDR 0x00001000


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_ONCHIP_MEMORY2
#define __ALTERA_AVALON_PIO
#define __ALTERA_AVALON_TIMER
#define __ALTERA_NIOS2_GEN2


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "Cyclone V"
#define ALT_ENHANCED_INTERRUPT_API_PRESENT
#define ALT_IRQ_BASE NULL
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/jtag_uart_0"
#define ALT_STDERR_BASE 0x31c8
#define ALT_STDERR_DEV jtag_uart_0
#define ALT_STDERR_IS_JTAG_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN "/dev/jtag_uart_0"
#define ALT_STDIN_BASE 0x31c8
#define ALT_STDIN_DEV jtag_uart_0
#define ALT_STDIN_IS_JTAG_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_jtag_uart"
#define ALT_STDOUT "/dev/jtag_uart_0"
#define ALT_STDOUT_BASE 0x31c8
#define ALT_STDOUT_DEV jtag_uart_0
#define ALT_STDOUT_IS_JTAG_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_jtag_uart"
#define ALT_SYSTEM_NAME "CPU1"


/*
 * hal configuration
 *
 */

#define ALT_INCLUDE_INSTRUCTION_RELATED_EXCEPTION_API
#define ALT_MAX_FD 4
#define ALT_SYS_CLK none
#define ALT_TIMESTAMP_CLK none


/*
 * jtag_uart_0 configuration
 *
 */

#define ALT_MODULE_CLASS_jtag_uart_0 altera_avalon_jtag_uart
#define JTAG_UART_0_BASE 0x31c8
#define JTAG_UART_0_IRQ 0
#define JTAG_UART_0_IRQ_INTERRUPT_CONTROLLER_ID 0
#define JTAG_UART_0_NAME "/dev/jtag_uart_0"
#define JTAG_UART_0_READ_DEPTH 64
#define JTAG_UART_0_READ_THRESHOLD 8
#define JTAG_UART_0_SPAN 8
#define JTAG_UART_0_TYPE "altera_avalon_jtag_uart"
#define JTAG_UART_0_WRITE_DEPTH 64
#define JTAG_UART_0_WRITE_THRESHOLD 8


/*
 * onchip_memory2_0 configuration
 *
 */

#define ALT_MODULE_CLASS_onchip_memory2_0 altera_avalon_onchip_memory2
#define ONCHIP_MEMORY2_0_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define ONCHIP_MEMORY2_0_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define ONCHIP_MEMORY2_0_BASE 0x1000
#define ONCHIP_MEMORY2_0_CONTENTS_INFO ""
#define ONCHIP_MEMORY2_0_DUAL_PORT 0
#define ONCHIP_MEMORY2_0_GUI_RAM_BLOCK_TYPE "AUTO"
#define ONCHIP_MEMORY2_0_INIT_CONTENTS_FILE "CPU1_onchip_memory2_0"
#define ONCHIP_MEMORY2_0_INIT_MEM_CONTENT 1
#define ONCHIP_MEMORY2_0_INSTANCE_ID "NONE"
#define ONCHIP_MEMORY2_0_IRQ -1
#define ONCHIP_MEMORY2_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define ONCHIP_MEMORY2_0_NAME "/dev/onchip_memory2_0"
#define ONCHIP_MEMORY2_0_NON_DEFAULT_INIT_FILE_ENABLED 0
#define ONCHIP_MEMORY2_0_RAM_BLOCK_TYPE "AUTO"
#define ONCHIP_MEMORY2_0_READ_DURING_WRITE_MODE "DONT_CARE"
#define ONCHIP_MEMORY2_0_SINGLE_CLOCK_OP 0
#define ONCHIP_MEMORY2_0_SIZE_MULTIPLE 1
#define ONCHIP_MEMORY2_0_SIZE_VALUE 4096
#define ONCHIP_MEMORY2_0_SPAN 4096
#define ONCHIP_MEMORY2_0_TYPE "altera_avalon_onchip_memory2"
#define ONCHIP_MEMORY2_0_WRITABLE 1


/*
 * pio_button_hours configuration
 *
 */

#define ALT_MODULE_CLASS_pio_button_hours altera_avalon_pio
#define PIO_BUTTON_HOURS_BASE 0x3110
#define PIO_BUTTON_HOURS_BIT_CLEARING_EDGE_REGISTER 0
#define PIO_BUTTON_HOURS_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIO_BUTTON_HOURS_CAPTURE 1
#define PIO_BUTTON_HOURS_DATA_WIDTH 1
#define PIO_BUTTON_HOURS_DO_TEST_BENCH_WIRING 0
#define PIO_BUTTON_HOURS_DRIVEN_SIM_VALUE 0
#define PIO_BUTTON_HOURS_EDGE_TYPE "FALLING"
#define PIO_BUTTON_HOURS_FREQ 50000000
#define PIO_BUTTON_HOURS_HAS_IN 1
#define PIO_BUTTON_HOURS_HAS_OUT 0
#define PIO_BUTTON_HOURS_HAS_TRI 0
#define PIO_BUTTON_HOURS_IRQ 1
#define PIO_BUTTON_HOURS_IRQ_INTERRUPT_CONTROLLER_ID 0
#define PIO_BUTTON_HOURS_IRQ_TYPE "LEVEL"
#define PIO_BUTTON_HOURS_NAME "/dev/pio_button_hours"
#define PIO_BUTTON_HOURS_RESET_VALUE 0
#define PIO_BUTTON_HOURS_SPAN 16
#define PIO_BUTTON_HOURS_TYPE "altera_avalon_pio"


/*
 * pio_button_minutes configuration
 *
 */

#define ALT_MODULE_CLASS_pio_button_minutes altera_avalon_pio
#define PIO_BUTTON_MINUTES_BASE 0x3100
#define PIO_BUTTON_MINUTES_BIT_CLEARING_EDGE_REGISTER 0
#define PIO_BUTTON_MINUTES_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIO_BUTTON_MINUTES_CAPTURE 1
#define PIO_BUTTON_MINUTES_DATA_WIDTH 1
#define PIO_BUTTON_MINUTES_DO_TEST_BENCH_WIRING 0
#define PIO_BUTTON_MINUTES_DRIVEN_SIM_VALUE 0
#define PIO_BUTTON_MINUTES_EDGE_TYPE "FALLING"
#define PIO_BUTTON_MINUTES_FREQ 50000000
#define PIO_BUTTON_MINUTES_HAS_IN 1
#define PIO_BUTTON_MINUTES_HAS_OUT 0
#define PIO_BUTTON_MINUTES_HAS_TRI 0
#define PIO_BUTTON_MINUTES_IRQ 2
#define PIO_BUTTON_MINUTES_IRQ_INTERRUPT_CONTROLLER_ID 0
#define PIO_BUTTON_MINUTES_IRQ_TYPE "LEVEL"
#define PIO_BUTTON_MINUTES_NAME "/dev/pio_button_minutes"
#define PIO_BUTTON_MINUTES_RESET_VALUE 0
#define PIO_BUTTON_MINUTES_SPAN 16
#define PIO_BUTTON_MINUTES_TYPE "altera_avalon_pio"


/*
 * pio_buzz_0 configuration
 *
 */

#define ALT_MODULE_CLASS_pio_buzz_0 altera_avalon_pio
#define PIO_BUZZ_0_BASE 0x3160
#define PIO_BUZZ_0_BIT_CLEARING_EDGE_REGISTER 0
#define PIO_BUZZ_0_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIO_BUZZ_0_CAPTURE 0
#define PIO_BUZZ_0_DATA_WIDTH 1
#define PIO_BUZZ_0_DO_TEST_BENCH_WIRING 0
#define PIO_BUZZ_0_DRIVEN_SIM_VALUE 0
#define PIO_BUZZ_0_EDGE_TYPE "NONE"
#define PIO_BUZZ_0_FREQ 50000000
#define PIO_BUZZ_0_HAS_IN 0
#define PIO_BUZZ_0_HAS_OUT 1
#define PIO_BUZZ_0_HAS_TRI 0
#define PIO_BUZZ_0_IRQ -1
#define PIO_BUZZ_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PIO_BUZZ_0_IRQ_TYPE "NONE"
#define PIO_BUZZ_0_NAME "/dev/pio_buzz_0"
#define PIO_BUZZ_0_RESET_VALUE 0
#define PIO_BUZZ_0_SPAN 16
#define PIO_BUZZ_0_TYPE "altera_avalon_pio"


/*
 * pio_leds_0 configuration
 *
 */

#define ALT_MODULE_CLASS_pio_leds_0 altera_avalon_pio
#define PIO_LEDS_0_BASE 0x31b0
#define PIO_LEDS_0_BIT_CLEARING_EDGE_REGISTER 0
#define PIO_LEDS_0_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIO_LEDS_0_CAPTURE 0
#define PIO_LEDS_0_DATA_WIDTH 2
#define PIO_LEDS_0_DO_TEST_BENCH_WIRING 0
#define PIO_LEDS_0_DRIVEN_SIM_VALUE 0
#define PIO_LEDS_0_EDGE_TYPE "NONE"
#define PIO_LEDS_0_FREQ 50000000
#define PIO_LEDS_0_HAS_IN 0
#define PIO_LEDS_0_HAS_OUT 1
#define PIO_LEDS_0_HAS_TRI 0
#define PIO_LEDS_0_IRQ -1
#define PIO_LEDS_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PIO_LEDS_0_IRQ_TYPE "NONE"
#define PIO_LEDS_0_NAME "/dev/pio_leds_0"
#define PIO_LEDS_0_RESET_VALUE 0
#define PIO_LEDS_0_SPAN 16
#define PIO_LEDS_0_TYPE "altera_avalon_pio"


/*
 * pio_s1 configuration
 *
 */

#define ALT_MODULE_CLASS_pio_s1 altera_avalon_pio
#define PIO_S1_BASE 0x3190
#define PIO_S1_BIT_CLEARING_EDGE_REGISTER 0
#define PIO_S1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIO_S1_CAPTURE 0
#define PIO_S1_DATA_WIDTH 7
#define PIO_S1_DO_TEST_BENCH_WIRING 0
#define PIO_S1_DRIVEN_SIM_VALUE 0
#define PIO_S1_EDGE_TYPE "NONE"
#define PIO_S1_FREQ 50000000
#define PIO_S1_HAS_IN 0
#define PIO_S1_HAS_OUT 1
#define PIO_S1_HAS_TRI 0
#define PIO_S1_IRQ -1
#define PIO_S1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PIO_S1_IRQ_TYPE "NONE"
#define PIO_S1_NAME "/dev/pio_s1"
#define PIO_S1_RESET_VALUE 0
#define PIO_S1_SPAN 16
#define PIO_S1_TYPE "altera_avalon_pio"


/*
 * pio_s2 configuration
 *
 */

#define ALT_MODULE_CLASS_pio_s2 altera_avalon_pio
#define PIO_S2_BASE 0x3180
#define PIO_S2_BIT_CLEARING_EDGE_REGISTER 0
#define PIO_S2_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIO_S2_CAPTURE 0
#define PIO_S2_DATA_WIDTH 7
#define PIO_S2_DO_TEST_BENCH_WIRING 0
#define PIO_S2_DRIVEN_SIM_VALUE 0
#define PIO_S2_EDGE_TYPE "NONE"
#define PIO_S2_FREQ 50000000
#define PIO_S2_HAS_IN 0
#define PIO_S2_HAS_OUT 1
#define PIO_S2_HAS_TRI 0
#define PIO_S2_IRQ -1
#define PIO_S2_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PIO_S2_IRQ_TYPE "NONE"
#define PIO_S2_NAME "/dev/pio_s2"
#define PIO_S2_RESET_VALUE 0
#define PIO_S2_SPAN 16
#define PIO_S2_TYPE "altera_avalon_pio"


/*
 * pio_s3 configuration
 *
 */

#define ALT_MODULE_CLASS_pio_s3 altera_avalon_pio
#define PIO_S3_BASE 0x3170
#define PIO_S3_BIT_CLEARING_EDGE_REGISTER 0
#define PIO_S3_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIO_S3_CAPTURE 0
#define PIO_S3_DATA_WIDTH 7
#define PIO_S3_DO_TEST_BENCH_WIRING 0
#define PIO_S3_DRIVEN_SIM_VALUE 0
#define PIO_S3_EDGE_TYPE "NONE"
#define PIO_S3_FREQ 50000000
#define PIO_S3_HAS_IN 0
#define PIO_S3_HAS_OUT 1
#define PIO_S3_HAS_TRI 0
#define PIO_S3_IRQ -1
#define PIO_S3_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PIO_S3_IRQ_TYPE "NONE"
#define PIO_S3_NAME "/dev/pio_s3"
#define PIO_S3_RESET_VALUE 0
#define PIO_S3_SPAN 16
#define PIO_S3_TYPE "altera_avalon_pio"


/*
 * pio_s4 configuration
 *
 */

#define ALT_MODULE_CLASS_pio_s4 altera_avalon_pio
#define PIO_S4_BASE 0x31a0
#define PIO_S4_BIT_CLEARING_EDGE_REGISTER 0
#define PIO_S4_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIO_S4_CAPTURE 0
#define PIO_S4_DATA_WIDTH 7
#define PIO_S4_DO_TEST_BENCH_WIRING 0
#define PIO_S4_DRIVEN_SIM_VALUE 0
#define PIO_S4_EDGE_TYPE "NONE"
#define PIO_S4_FREQ 50000000
#define PIO_S4_HAS_IN 0
#define PIO_S4_HAS_OUT 1
#define PIO_S4_HAS_TRI 0
#define PIO_S4_IRQ -1
#define PIO_S4_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PIO_S4_IRQ_TYPE "NONE"
#define PIO_S4_NAME "/dev/pio_s4"
#define PIO_S4_RESET_VALUE 0
#define PIO_S4_SPAN 16
#define PIO_S4_TYPE "altera_avalon_pio"


/*
 * pio_set_alarm configuration
 *
 */

#define ALT_MODULE_CLASS_pio_set_alarm altera_avalon_pio
#define PIO_SET_ALARM_BASE 0x3140
#define PIO_SET_ALARM_BIT_CLEARING_EDGE_REGISTER 0
#define PIO_SET_ALARM_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIO_SET_ALARM_CAPTURE 0
#define PIO_SET_ALARM_DATA_WIDTH 1
#define PIO_SET_ALARM_DO_TEST_BENCH_WIRING 0
#define PIO_SET_ALARM_DRIVEN_SIM_VALUE 0
#define PIO_SET_ALARM_EDGE_TYPE "NONE"
#define PIO_SET_ALARM_FREQ 50000000
#define PIO_SET_ALARM_HAS_IN 1
#define PIO_SET_ALARM_HAS_OUT 0
#define PIO_SET_ALARM_HAS_TRI 0
#define PIO_SET_ALARM_IRQ -1
#define PIO_SET_ALARM_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PIO_SET_ALARM_IRQ_TYPE "NONE"
#define PIO_SET_ALARM_NAME "/dev/pio_set_alarm"
#define PIO_SET_ALARM_RESET_VALUE 0
#define PIO_SET_ALARM_SPAN 16
#define PIO_SET_ALARM_TYPE "altera_avalon_pio"


/*
 * pio_switch_clock configuration
 *
 */

#define ALT_MODULE_CLASS_pio_switch_clock altera_avalon_pio
#define PIO_SWITCH_CLOCK_BASE 0x3130
#define PIO_SWITCH_CLOCK_BIT_CLEARING_EDGE_REGISTER 0
#define PIO_SWITCH_CLOCK_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIO_SWITCH_CLOCK_CAPTURE 0
#define PIO_SWITCH_CLOCK_DATA_WIDTH 1
#define PIO_SWITCH_CLOCK_DO_TEST_BENCH_WIRING 0
#define PIO_SWITCH_CLOCK_DRIVEN_SIM_VALUE 0
#define PIO_SWITCH_CLOCK_EDGE_TYPE "NONE"
#define PIO_SWITCH_CLOCK_FREQ 50000000
#define PIO_SWITCH_CLOCK_HAS_IN 1
#define PIO_SWITCH_CLOCK_HAS_OUT 0
#define PIO_SWITCH_CLOCK_HAS_TRI 0
#define PIO_SWITCH_CLOCK_IRQ -1
#define PIO_SWITCH_CLOCK_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PIO_SWITCH_CLOCK_IRQ_TYPE "NONE"
#define PIO_SWITCH_CLOCK_NAME "/dev/pio_switch_clock"
#define PIO_SWITCH_CLOCK_RESET_VALUE 0
#define PIO_SWITCH_CLOCK_SPAN 16
#define PIO_SWITCH_CLOCK_TYPE "altera_avalon_pio"


/*
 * pio_switch_off configuration
 *
 */

#define ALT_MODULE_CLASS_pio_switch_off altera_avalon_pio
#define PIO_SWITCH_OFF_BASE 0x3150
#define PIO_SWITCH_OFF_BIT_CLEARING_EDGE_REGISTER 0
#define PIO_SWITCH_OFF_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIO_SWITCH_OFF_CAPTURE 0
#define PIO_SWITCH_OFF_DATA_WIDTH 1
#define PIO_SWITCH_OFF_DO_TEST_BENCH_WIRING 0
#define PIO_SWITCH_OFF_DRIVEN_SIM_VALUE 0
#define PIO_SWITCH_OFF_EDGE_TYPE "NONE"
#define PIO_SWITCH_OFF_FREQ 50000000
#define PIO_SWITCH_OFF_HAS_IN 1
#define PIO_SWITCH_OFF_HAS_OUT 0
#define PIO_SWITCH_OFF_HAS_TRI 0
#define PIO_SWITCH_OFF_IRQ -1
#define PIO_SWITCH_OFF_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PIO_SWITCH_OFF_IRQ_TYPE "NONE"
#define PIO_SWITCH_OFF_NAME "/dev/pio_switch_off"
#define PIO_SWITCH_OFF_RESET_VALUE 0
#define PIO_SWITCH_OFF_SPAN 16
#define PIO_SWITCH_OFF_TYPE "altera_avalon_pio"


/*
 * pio_switch_reset configuration
 *
 */

#define ALT_MODULE_CLASS_pio_switch_reset altera_avalon_pio
#define PIO_SWITCH_RESET_BASE 0x3120
#define PIO_SWITCH_RESET_BIT_CLEARING_EDGE_REGISTER 0
#define PIO_SWITCH_RESET_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIO_SWITCH_RESET_CAPTURE 0
#define PIO_SWITCH_RESET_DATA_WIDTH 1
#define PIO_SWITCH_RESET_DO_TEST_BENCH_WIRING 0
#define PIO_SWITCH_RESET_DRIVEN_SIM_VALUE 0
#define PIO_SWITCH_RESET_EDGE_TYPE "NONE"
#define PIO_SWITCH_RESET_FREQ 50000000
#define PIO_SWITCH_RESET_HAS_IN 1
#define PIO_SWITCH_RESET_HAS_OUT 0
#define PIO_SWITCH_RESET_HAS_TRI 0
#define PIO_SWITCH_RESET_IRQ -1
#define PIO_SWITCH_RESET_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PIO_SWITCH_RESET_IRQ_TYPE "NONE"
#define PIO_SWITCH_RESET_NAME "/dev/pio_switch_reset"
#define PIO_SWITCH_RESET_RESET_VALUE 0
#define PIO_SWITCH_RESET_SPAN 16
#define PIO_SWITCH_RESET_TYPE "altera_avalon_pio"


/*
 * timer_0 configuration
 *
 */

#define ALT_MODULE_CLASS_timer_0 altera_avalon_timer
#define TIMER_0_ALWAYS_RUN 1
#define TIMER_0_BASE 0x3020
#define TIMER_0_COUNTER_SIZE 32
#define TIMER_0_FIXED_PERIOD 1
#define TIMER_0_FREQ 50000000
#define TIMER_0_IRQ 3
#define TIMER_0_IRQ_INTERRUPT_CONTROLLER_ID 0
#define TIMER_0_LOAD_VALUE 49999999
#define TIMER_0_MULT 1.0
#define TIMER_0_NAME "/dev/timer_0"
#define TIMER_0_PERIOD 1
#define TIMER_0_PERIOD_UNITS "s"
#define TIMER_0_RESET_OUTPUT 0
#define TIMER_0_SNAPSHOT 0
#define TIMER_0_SPAN 32
#define TIMER_0_TICKS_PER_SEC 1
#define TIMER_0_TIMEOUT_PULSE_OUTPUT 0
#define TIMER_0_TYPE "altera_avalon_timer"

#endif /* __SYSTEM_H_ */
