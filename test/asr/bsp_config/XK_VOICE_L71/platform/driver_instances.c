// Copyright 2022-2023 XMOS LIMITED.
// This Software is subject to the terms of the XMOS Public Licence: Version 1.
// XMOS Public License: Version 1

#include "platform/driver_instances.h"

static rtos_intertile_t intertile_ctx_s;
rtos_intertile_t *intertile_ctx = &intertile_ctx_s;

static rtos_qspi_flash_t qspi_flash_ctx_s;
rtos_qspi_flash_t *qspi_flash_ctx = &qspi_flash_ctx_s;
