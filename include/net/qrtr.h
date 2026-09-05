/* SPDX-License-Identifier: GPL-2.0-or-later */
#ifndef __NET_QRTR_H
#define __NET_QRTR_H

#include <linux/types.h>

int qrtr_endpoint_get_data_id(u32 *endpoint_id);
void qrtr_endpoint_free_data_id(u32 endpoint_id);

#endif	/* __NET_QRTR_H */
