/* SPDX-License-Identifier: GPL-2.0-or-later */
#ifndef __NET_QRTR_H
#define __NET_QRTR_H

#include <linux/types.h>

int qrtr_endpoint_id_get(const void *data, u32 *id);
int qrtr_endpoint_id_assign(void *data, u32 *id);
int qrtr_endpoint_id_get_or_assign(void *data, u32 *id);

#endif	/* __NET_QRTR_H */
