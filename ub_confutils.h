/*
 * Excelfore Universal Base Library
 * Copyright (C) 2019 Excelfore Corporation (https://excelfore.com)
 *
 * This file is part of Excelfore-unibase.
 *
 * Excelfore-unibase is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * Excelfore-unibase is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Excelfore-unibase.  If not, see
 * <https://www.gnu.org/licenses/old-licenses/gpl-2.0.html>.
 */
/**
 * @defgroup confutils	configuration utilities
 * @{
 * @file ub_confutils.h
 * @copyright Copyright (C) 2019 Excelfore Corporation
 * @author Shiro Ninomiya (shiro@excelfore.com)
 *
 * @brief configure from a configuration file.
 * 	ub_set_item_cb_t callback function can be generated by 'ub_genconf.py'
 */

#ifndef __UB_CONFUTILS_H_
#define __UB_CONFUTILS_H_

/**
 * @brief call back function which configures one configuration item indicated by
 * a string of 'itemp' to value 'v'
 */
typedef int (*ub_set_item_cb_t)(char *itemp, void *v);

/**
 * @brief read from a configuration file, and set all items in the file
 */
int ub_read_config_file(char *fname, ub_set_item_cb_t set_item);

#endif
/** @}*/