PORTNAME=	zfec
PORTVERSION=	1.6.0.0
CATEGORIES=	converters python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Efficient, portable erasure coding tool
WWW=		https://github.com/tahoe-lafs/zfec

LICENSE=	GPLv2+ TGGPL
LICENSE_COMB=	dual
LICENSE_NAME_TGGPL=	Transitive Grace Period Public Licence 1.0
LICENSE_FILE_GPLv2+ =	${WRKSRC}/COPYING.GPL
LICENSE_FILE_TGGPL=	${WRKSRC}/COPYING.TGPPL.rst
LICENSE_PERMS_TGGPL=	auto-accept dist-mirror dist-sell pkg-mirror pkg-sell

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}setuptools>=0:devel/py-setuptools@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}wheel>=0:devel/py-wheel@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist concurrent pep517

post-install:
	${FIND} ${STAGEDIR}${PYTHON_SITELIBDIR} -name '*.so' -exec ${STRIP_CMD} {} +

.include <bsd.port.mk>
