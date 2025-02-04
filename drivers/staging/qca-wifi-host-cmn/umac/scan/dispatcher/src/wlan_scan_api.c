/*
 * Copyright (c) 2017-2020 The Linux Foundation. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software for
 * any purpose with or without fee is hereby granted, provided that the
 * above copyright notice and this permission notice appear in all
 * copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL
 * WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE
 * AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL
 * DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR
 * PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
 * TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */

/*
 * DOC: This file contains all SCAN component's APIs
 */

#include "cfg_ucfg_api.h"
#include "wlan_scan_api.h"

void wlan_scan_cfg_get_passive_dwelltime(struct wlan_objmgr_psoc *psoc,
					 uint32_t *dwell_time)
{
	struct wlan_scan_obj *scan_obj;

	scan_obj = wlan_psoc_get_scan_obj(psoc);
	if (!scan_obj)
		return;
	*dwell_time = scan_obj->scan_def.passive_dwell;
}

void wlan_scan_cfg_set_passive_dwelltime(struct wlan_objmgr_psoc *psoc,
					 uint32_t dwell_time)
{
	struct wlan_scan_obj *scan_obj;

	scan_obj = wlan_psoc_get_scan_obj(psoc);
	if (!scan_obj)
		return;
	scan_obj->scan_def.passive_dwell = dwell_time;
}

void wlan_scan_cfg_get_active_dwelltime(struct wlan_objmgr_psoc *psoc,
					uint32_t *dwell_time)
{
	struct wlan_scan_obj *scan_obj;

	scan_obj = wlan_psoc_get_scan_obj(psoc);
	if (!scan_obj)
		return;
	*dwell_time = scan_obj->scan_def.active_dwell;
}

void wlan_scan_cfg_set_active_dwelltime(struct wlan_objmgr_psoc *psoc,
					uint32_t dwell_time)
{
	struct wlan_scan_obj *scan_obj;

	scan_obj = wlan_psoc_get_scan_obj(psoc);
	if (!scan_obj)
		return;
	scan_obj->scan_def.active_dwell = dwell_time;
}

void wlan_scan_cfg_get_active_2g_dwelltime(struct wlan_objmgr_psoc *psoc,
					   uint32_t *dwell_time)
{
	struct wlan_scan_obj *scan_obj;

	scan_obj = wlan_psoc_get_scan_obj(psoc);
	if (!scan_obj)
		return;

	*dwell_time = scan_obj->scan_def.active_dwell_2g;
}

void wlan_scan_cfg_set_active_2g_dwelltime(struct wlan_objmgr_psoc *psoc,
					   uint32_t dwell_time)
{
	struct wlan_scan_obj *scan_obj;

	scan_obj = wlan_psoc_get_scan_obj(psoc);
	if (!scan_obj)
		return;
	scan_obj->scan_def.active_dwell_2g = dwell_time;
}

void wlan_scan_cfg_get_conc_active_dwelltime(struct wlan_objmgr_psoc *psoc,
					     uint32_t *dwell_time)
{
	struct wlan_scan_obj *scan_obj;

	scan_obj = wlan_psoc_get_scan_obj(psoc);
	if (!scan_obj)
		return;

	*dwell_time = scan_obj->scan_def.conc_active_dwell;
}

void wlan_scan_cfg_set_conc_active_dwelltime(struct wlan_objmgr_psoc *psoc,
					     uint32_t dwell_time)
{
	struct wlan_scan_obj *scan_obj;

	scan_obj = wlan_psoc_get_scan_obj(psoc);
	if (!scan_obj)
		return;

	scan_obj->scan_def.conc_active_dwell = dwell_time;
}

void wlan_scan_cfg_get_conc_passive_dwelltime(struct wlan_objmgr_psoc *psoc,
					      uint32_t *dwell_time)
{
	struct wlan_scan_obj *scan_obj;

	scan_obj = wlan_psoc_get_scan_obj(psoc);
	if (!scan_obj)
		return;

	*dwell_time = scan_obj->scan_def.conc_passive_dwell;
}

void wlan_scan_cfg_set_conc_passive_dwelltime(struct wlan_objmgr_psoc *psoc,
					      uint32_t dwell_time)
{
	struct wlan_scan_obj *scan_obj;

	scan_obj = wlan_psoc_get_scan_obj(psoc);
	if (!scan_obj)
		return;

	scan_obj->scan_def.conc_passive_dwell = dwell_time;
}

void
wlan_scan_cfg_get_dfs_chan_scan_allowed(struct wlan_objmgr_psoc *psoc,
					bool *enable_dfs_scan)
{
	struct wlan_scan_obj *scan_obj;

	scan_obj = wlan_psoc_get_scan_obj(psoc);
	if (!scan_obj)
		return;

	*enable_dfs_scan = scan_obj->scan_def.allow_dfs_chan_in_scan;
}

void
wlan_scan_cfg_set_dfs_chan_scan_allowed(struct wlan_objmgr_psoc *psoc,
					bool enable_dfs_scan)
{
	struct wlan_scan_obj *scan_obj;

	scan_obj = wlan_psoc_get_scan_obj(psoc);
	if (!scan_obj)
		return;

	scan_obj->scan_def.allow_dfs_chan_in_scan = enable_dfs_scan;
}

bool wlan_scan_cfg_honour_nl_scan_policy_flags(struct wlan_objmgr_psoc *psoc)
{
	struct wlan_scan_obj *scan_obj;

	scan_obj = wlan_psoc_get_scan_obj(psoc);
	if (!scan_obj)
		return false;

	return scan_obj->scan_def.honour_nl_scan_policy_flags;
}

void wlan_scan_cfg_get_conc_max_resttime(struct wlan_objmgr_psoc *psoc,
					 uint32_t *rest_time)
{
	struct wlan_scan_obj *scan_obj;

	scan_obj = wlan_psoc_get_scan_obj(psoc);
	if (!scan_obj)
		return;

	*rest_time = scan_obj->scan_def.conc_max_rest_time;
}

void wlan_scan_cfg_get_conc_min_resttime(struct wlan_objmgr_psoc *psoc,
					 uint32_t *rest_time)
{
	struct wlan_scan_obj *scan_obj;

	scan_obj = wlan_psoc_get_scan_obj(psoc);
	if (!scan_obj)
		return;

	*rest_time = scan_obj->scan_def.conc_min_rest_time;
}

bool wlan_scan_is_snr_monitor_enabled(struct wlan_objmgr_psoc *psoc)
{
	struct wlan_scan_obj *scan_obj;

	scan_obj = wlan_psoc_get_scan_obj(psoc);
	if (!scan_obj)
		return cfg_default(CFG_ENABLE_SNR_MONITORING);

	return scan_obj->scan_def.scan_f_chan_stat_evnt;
}

QDF_STATUS
wlan_scan_process_bcn_probe_rx_sync(struct wlan_objmgr_psoc *psoc,
				    qdf_nbuf_t buf,
				    struct mgmt_rx_event_params *rx_param,
				    enum mgmt_frame_type frm_type)
{
	struct scan_bcn_probe_event *bcn = NULL;
	QDF_STATUS status;

	if ((frm_type != MGMT_PROBE_RESP) &&
	    (frm_type != MGMT_BEACON)) {
		scm_err("frame is not beacon or probe resp");
		status = QDF_STATUS_E_INVAL;
		goto free;
	}

	bcn = qdf_mem_malloc_atomic(sizeof(*bcn));
	if (!bcn) {
		status = QDF_STATUS_E_NOMEM;
		goto free;
	}
	bcn->rx_data =
		qdf_mem_malloc_atomic(sizeof(*rx_param));
	if (!bcn->rx_data) {
		status = QDF_STATUS_E_NOMEM;
		goto free;
	}

	if (frm_type == MGMT_PROBE_RESP)
		bcn->frm_type = MGMT_SUBTYPE_PROBE_RESP;
	else
		bcn->frm_type = MGMT_SUBTYPE_BEACON;

	status = wlan_objmgr_psoc_try_get_ref(psoc, WLAN_SCAN_ID);
	if (QDF_IS_STATUS_ERROR(status)) {
		scm_info("unable to get reference");
		goto free;
	}

	bcn->psoc = psoc;
	bcn->buf = buf;
	qdf_mem_copy(bcn->rx_data, rx_param, sizeof(*rx_param));

	return __scm_handle_bcn_probe(bcn);
free:
	if (bcn && bcn->rx_data)
		qdf_mem_free(bcn->rx_data);
	if (bcn)
		qdf_mem_free(bcn);
	if (buf)
		qdf_nbuf_free(buf);

	return status;
}
