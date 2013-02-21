#ifndef _LOGGINGRB_H
#define _LOGGINGRB_H

/* (C) 2012-2013 by Katerina Barone-Adesi <kat.obsc@gmail.com>
 * All Rights Reserved
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 */


/*! \defgroup loggingrb Osmocom ringbuffer-backed logging
 *  @{
 */

/*! \file loggingrb.h
 */

struct log_info;

size_t log_target_rb_used_size(struct log_target const *target);
size_t log_target_rb_avail_size(struct log_target const *target);
const char *log_target_rb_get(struct log_target const *target, size_t logindex);
struct log_target *log_target_create_rb(size_t size);

/*! @} */

#endif /* _LOGGINGRB_H  */
