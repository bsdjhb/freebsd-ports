PORTNAME=	matterhorn
DISTVERSION=	90000.0.1
CATEGORIES=	net-im

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Feature-rich Unix terminal client for the Mattermost chat system
WWW=		https://github.com/matterhorn-chat/matterhorn/

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		cabal

USE_CABAL=	HTTP-4000.4.1_4 \
		Hclip-3.0.0.4 \
		OneTuple-0.4.2 \
		QuickCheck-2.14.3 \
		SHA-1.6.4.4 \
		StateVar-1.2.2 \
		aeson-2.1.2.1_4 \
		ansi-terminal-1.1.1 \
		ansi-terminal-types-1.1 \
		asn1-encoding-0.9.6_2 \
		asn1-parse-0.9.5 \
		asn1-types-0.3.4 \
		aspell-pipe-0.6 \
		assoc-1.1.1 \
		async-2.2.5_2 \
		attoparsec-0.14.4_5 \
		base-compat-0.12.3 \
		base-compat-batteries-0.12.3 \
		base-orphans-0.9.2 \
		base16-bytestring-1.0.2.0_1 \
		base64-bytestring-1.2.1.0_1 \
		basement-0.0.16 \
		bifunctors-5.6.2 \
		bimap-0.5.0 \
		bitvec-1.1.5.0_1 \
		blaze-builder-0.4.2.3 \
		blaze-html-0.9.2.0_1 \
		blaze-markup-0.8.3.0_2 \
		brick-2.4 \
		brick-skylighting-1.0 \
		cabal-doctest-1.0.10 \
		case-insensitive-1.2.1.0 \
		cborg-0.2.10.0_1 \
		cereal-0.5.8.3 \
		colour-2.3.6 \
		commonmark-0.2.6 \
		commonmark-extensions-0.2.5.5 \
		comonad-5.0.8_2 \
		conduit-1.3.6 \
		conduit-extra-1.3.6 \
		config-ini-0.2.7.0_1 \
		contravariant-1.5.5 \
		cryptohash-md5-0.11.101.0_5 \
		cryptohash-sha1-0.11.101.0_5 \
		crypton-1.0.0 \
		crypton-connection-0.3.2_1 \
		crypton-x509-1.7.7 \
		crypton-x509-store-1.6.9 \
		crypton-x509-system-1.6.7 \
		crypton-x509-validation-1.6.12 \
		data-clist-0.1.2.3_1 \
		data-default-class-0.1.2.0 \
		data-fix-0.3.4 \
		distributive-0.6.2.1_1 \
		dlist-1.0_2 \
		emojis-0.1.4.1 \
		entropy-0.4.1.10_2 \
		extensible-exceptions-0.1.1.4 \
		generically-0.1.1_3 \
		gitrev-1.3.1 \
		half-0.3.1_2 \
		happy-1.20.1.1 \
		hashable-1.4.4.0_1 \
		haskell-lexer-1.1.1 \
		hourglass-0.2.12_1 \
		hsc2hs-0.68.10_2 \
		http-media-0.8.1.1_2 \
		indexed-traversable-0.1.4 \
		indexed-traversable-instances-0.1.2 \
		integer-logarithms-1.0.3.1_6 \
		mattermost-api-90000.0.0 \
		megaparsec-9.6.1 \
		memory-0.18.0 \
		microlens-0.4.13.1_1 \
		microlens-ghc-0.4.14.3 \
		microlens-mtl-0.2.0.3_1 \
		microlens-platform-0.4.3.5 \
		microlens-th-0.4.3.15 \
		modern-uri-0.3.6.1_2 \
		mono-traversable-1.0.17.0 \
		network-3.2.2.0 \
		network-info-0.2.1 \
		network-uri-2.6.4.2_1 \
		old-locale-1.0.0.7_2 \
		old-time-1.1.0.4 \
		os-string-2.0.6 \
		parser-combinators-1.3.0_1 \
		pem-0.2.4 \
		pretty-show-1.10 \
		primitive-0.8.0.0_1 \
		profunctors-5.6.2_3 \
		random-1.1_1 \
		reflection-2.1.8 \
		resource-pool-0.4.0.0 \
		resourcet-1.3.0 \
		safe-0.3.21_1 \
		scientific-0.3.7.0_7 \
		semialign-1.3.1_1 \
		semigroupoids-6.0.1_1 \
		semigroups-0.19.2_2 \
		serialise-0.2.6.1_3 \
		skylighting-core-0.12.3.1 \
		socks-0.6.1 \
		split-0.2.5 \
		splitmix-0.1.0.5_1 \
		stm-delay-0.1.1.1 \
		streaming-commons-0.2.2.6_1 \
		strict-0.5_1 \
		tagged-0.8.8_1 \
		temporary-1.3 \
		text-short-0.1.6_2 \
		text-zipper-0.13 \
		th-abstraction-0.5.0.0 \
		th-compat-0.1.5_2 \
		these-1.2.1_1 \
		time-compat-1.9.7_2 \
		timezone-olson-0.2.1 \
		timezone-series-0.1.13_1 \
		tls-2.0.6 \
		transformers-compat-0.7.2 \
		typed-process-0.2.12.0 \
		unicode-data-0.6.0_1 \
		unicode-transforms-0.4.0.1_6 \
		unix-compat-0.7.2 \
		unix-time-0.4.15 \
		unliftio-core-0.2.1.0_4 \
		unordered-containers-0.2.20_3 \
		utf8-string-1.0.2 \
		uuid-1.3.15_3 \
		uuid-types-1.0.5.1 \
		vector-0.13.1.0_1 \
		vector-algorithms-0.9.0.2_1 \
		vector-stream-0.1.0.1_1 \
		vty-6.2 \
		vty-crossplatform-0.4.0.0 \
		vty-unix-0.2.0.0 \
		websockets-0.13.0.0_2 \
		witherable-0.4.2_5 \
		word-wrap-0.4.1_1 \
		xdg-basedir-0.2.2 \
		xml-conduit-1.9.1.3 \
		xml-types-0.3.8 \
		zlib-0.7.1.0_1

.include <bsd.port.mk>
