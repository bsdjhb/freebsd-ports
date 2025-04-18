PORTNAME=	bvm
DISTVERSION=	1.3.5
CATEGORIES=	sysutils

MAINTAINER=	bigdragonsoft@gmail.com
COMMENT=	Bhyve VM Manager
WWW=		https://github.com/bigdragonsoft/bvm

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

ONLY_FOR_ARCHS=	amd64
ONLY_FOR_ARCHS_REASON=	Bhyve VM Manager is required to be built on a 64bit machine

RUN_DEPENDS=	bhyve-firmware>0:sysutils/bhyve-firmware \
		grub-bhyve:sysutils/grub2-bhyve \
		tmux:sysutils/tmux

USE_GITHUB=	yes
GH_ACCOUNT=	bigdragonsoft

BUILD_WRKSRC=	${WRKSRC}/src

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/etc/bvm
	${INSTALL_DATA} ${WRKSRC}/conf/bvm.conf ${STAGEDIR}${PREFIX}/etc/bvm/bvm.conf.sample
	${INSTALL_DATA} ${WRKSRC}/conf/nat.conf ${STAGEDIR}${PREFIX}/etc/bvm/nat.conf.sample
	${INSTALL_DATA} ${WRKSRC}/conf/switch.conf ${STAGEDIR}${PREFIX}/etc/bvm/switch.conf.sample
	${INSTALL_DATA} ${WRKSRC}/conf/dhcp.conf ${STAGEDIR}${PREFIX}/etc/bvm/dhcp.conf.sample
	${INSTALL_SCRIPT} ${WRKSRC}/conf/bvmd ${STAGEDIR}${PREFIX}/etc/rc.d/
	${INSTALL_PROGRAM} ${WRKSRC}/src/bvm ${STAGEDIR}${PREFIX}/bin/
	${INSTALL_PROGRAM} ${WRKSRC}/src/bvmb ${STAGEDIR}${PREFIX}/bin/
	${INSTALL_PROGRAM} ${WRKSRC}/src/bvmdhcp ${STAGEDIR}${PREFIX}/bin/
	${INSTALL_MAN} ${WRKSRC}/bvm.8 ${STAGEDIR}${PREFIX}/share/man/man8

.include <bsd.port.mk>
