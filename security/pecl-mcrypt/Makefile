PORTNAME=	mcrypt
PORTVERSION=	1.0.7
PORTREVISION=	0
CATEGORIES=	security pear

MAINTAINER=	pizzamig@FreeBSD.org
COMMENT=	PHP extension for mcrypt, removed in PHP 7.2
WWW=		https://pecl.php.net/package/mcrypt

LICENSE=	PHP301

LIB_DEPENDS=	libltdl.so:devel/libltdl \
		libmcrypt.so:security/libmcrypt

USES=	php:pecl
IGNORE_WITH_PHP=	84

post-patch:
	${REINPLACE_CMD} -e 's/RETURN_FALSE$$/RETURN_FALSE;/g' ${WRKSRC}/mcrypt.c
	${REINPLACE_CMD} -e 's/RETURN_TRUE$$/RETURN_TRUE;/g' ${WRKSRC}/mcrypt.c

.include <bsd.port.mk>
