/* Forward-declare our functions so users can mention them in their
 * configs at the top of the file rather than near the bottom. */

static char *get_title(),
            *get_bar(),
            *get_os(),
            *get_kernel(),
            *get_host(),
            *get_uptime(),
            *get_packages(),
            *get_shell(),
            *get_resolution(),
            *get_terminal(),
            *get_cpu(),
            *get_gpu1(),
            *get_gpu2(),
            *get_memory(),
            *get_disk_usage_root(),
            *get_disk_usage_home(),
            *get_colors1(),
            *get_colors2(),
            *spacer();

#define SPACER {"", spacer, false},
#define REMOVE(A) { (A), sizeof(A) - 1}

#if D_arch
#define PKG_MANAGER "Pacman"
#define PKG_COMMAND "/bin/pacman", "", "-Qq"
#endif

#if D_gentoo
#define PKG_MANAGER "Portage"
#define PKG_COMMAND "/bin/equery", "", "list", "", "'*'"
#endif

#if D_debian
#define PKG_MANAGER "Apt"
#define PKG_COMMAND "/usr/bin/dpkg-query", "", "-l"
#endif
