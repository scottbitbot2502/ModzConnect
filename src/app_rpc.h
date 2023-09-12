/*
 * Copyright (c) 2022-2023 Golioth, Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * Handle remote procedure calls received from Golioth, returning a status code
 * indicating the success or failure of the call.
 *
 * https://docs.golioth.io/firmware/zephyr-device-sdk/remote-procedure-call
 */

#ifndef __APP_RPC_H__
#define __APP_RPC_H__

#include <net/golioth/system_client.h>

int app_rpc_init(struct golioth_client *state_client);
int app_rpc_observe(void);
int app_rpc_register(struct golioth_client *rpc_client);

#endif /* __APP_RPC_H__ */
