PKGNAMEPREFIX=
PORTNAME=	oxygen-fonts
DISTVERSION=	5.4.3
CATEGORIES=	x11-fonts kde-plasma

MAINTAINER=	vishwin@FreeBSD.org
COMMENT=	Plasma5 Oxygen font family
WWW=		https://cgit.kde.org/oxygen-fonts.git

LICENSE=	OFL11 GPLv3RLE+
LICENSE_COMB=	dual
LICENSE_FILE_OFL11=	${WRKSRC}/COPYING-OFL
LICENSE_FILE_GPLv3RLE+ =	${WRKSRC}/COPYING-GPL+FE.txt

BUILD_DEPENDS=	fontforge:print/fontforge

USES=		cmake fonts:none kde:5 qt:5 tar:xz

USE_KDE=	ecm:build
KDE_PLASMA_VERSION=	${DISTVERSION}
KDE_PLASMA_BRANCH=	Attic

USE_QT=	buildtools:build core:build qmake:build

NO_ARCH=	yes

.include <bsd.port.mk>
